#!/usr/bin/python

import sys, os, subprocess, re
from clang.cindex import Index
import ast_info, class_gen, config
from pprint import pprint

MYDIR = os.path.dirname(os.path.realpath(__file__))

if len(sys.argv) < 2:
    sys.exit('Usage: %s <Qt include directory>' % sys.argv[0])

if not os.path.exists(sys.argv[1]):
    sys.exit('ERROR: the path specified (%s) was not found!' % sys.argv[1])

rootdir = sys.argv[1]
clangIdx = Index.create()


def generateModuleFiles(module, classList):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp')
    f = open(os.path.join(targetDir, module+'.pri'), 'w')
    f.write("SOURCES += $$PWD/"+ module+'.cpp' +"\n")
    f.close()

    f = open(os.path.join(targetDir, module+'.cpp'), 'w')
    f.write("\n".join(map(lambda c: "#include \""+module+"/"+class_gen.fileNameFromClass(c)+"\"", classList))+"\n")
    f.write("namespace qtjs_binder {\n\n")
    f.write("void bind_"+module+"(vu8::Module &module) {\n")
    f.write("\n".join(map(lambda c: "    bind_"+module+"_"+class_gen.sanitizeName(c)+"(module);", classList))+"\n")
    f.write("}\n\n")
    f.write("}\n")
    f.close()


def process_file(path, module, skipClasses):
    tu = clangIdx.parse(None, ['-x', 'c++', path, '-I', rootdir])

    if not tu:
        raise "unable to load input"

    if len(tu.diagnostics):
        pprint(('diags', map(ast_info.get_diag_info, tu.diagnostics)))

    classes = []
    for c in ast_info.retrieve_classes(tu.cursor):
        classname = ast_info.semantic_name(c)
        if c.location.file.name.startswith(os.path.join(rootdir, module)) and not config.should_skip_class(classname) and classname not in skipClasses:
            class_gen.generate_class(c, module)
            classes.append(classname)

    return classes


for (module, dir) in [ \
        (module, dir) for (module, dir) in [ \
            (module, os.path.join(rootdir, module)) for module in os.listdir(rootdir) \
        ] if not module in [".",".."] and os.path.isdir(dir) \
    ]:
    print "top level dir: ", module,  dir
    classList = []
    for file in os.listdir(dir):
        path = os.path.join(dir, file)
        if os.path.isfile(path) and not re.match(r'.*\..*', file) and file not in classList:
            print "processing ", module, file
            classList.extend(process_file(path, module, classList))
            sys.stdout.flush()
        if len(classList):
            generateModuleFiles(module, classList)

