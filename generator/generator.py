#!/usr/bin/python

import sys, os, subprocess, re
from string import Template
from clang.cindex import Index
from clang.cindex import CursorKind
from pprint import pprint


#sys.path = ["../"] + sys.path
MYDIR = os.path.dirname(os.path.realpath(__file__))

if len(sys.argv) < 2:
    sys.exit('Usage: %s <Qt include directory>' % sys.argv[0])

if not os.path.exists(sys.argv[1]):
    sys.exit('ERROR: the path specified (%s) was not found!' % sys.argv[1])

rootdir = sys.argv[1]



def classTemplate():
    return """
#include <qtjs_bindings/shared.h>
#include <$header>

namespace qtjs_binder {

static inline void bind_${module}_$safeClassName(vu8::Module &module)
{
    vu8::Class<$className, vu8::Factory<$constructorArgs> > classBinder;
    ${methodBinders}
    module("$safeClassName", classBinder);
}

} // namespace
    """

def methodTemplate():
    return """
        classBinder.Set<$methodType, &$className::$method>("$method");"""

def methodParams(cppMethod):
    return ", ".join([a['type'] for a in cppMethod['parameters']])

def methodType(cppMethod):
    return cppMethod['rtnType'].replace("inline", "").replace("static", "")+'('+methodParams(cppMethod)+')'

def renderMethod(classname, cppMethod):
    return Template(methodTemplate()) \
        .substitute({'methodType':methodType(cppMethod),'className':classname, 'method': cppMethod['name']})

def sanitizeName(name):
    return name.replace('::', '_').replace(' ', '')

def fileNameFromClass(classname):
    return sanitizeName(classname)+".cpp"

def generateCppBindings(module, cppinfo, header):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    addedClasses = []
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)
    for classname in [a for a in cppinfo.classes if not '<' in a]:
        classInfo = cppinfo.classes[classname]
        constructors = [a for a in classInfo['methods']['public'] if a['constructor']]
        templateArgs = {'module':module, 'className':classname, 'safeClassName':sanitizeName(classname), 'header':header}
        if len(constructors) == 0:
            templateArgs['constructorArgs'] = ''
        else:
            templateArgs['constructorArgs'] = methodParams(constructors[0])
            if len(constructors) > 1:
                print "WARNING: more than one constructor: ", classname
        templateArgs['methodBinders'] = ''
        for method in [a for a in classInfo['methods']['public'] if ((not a['constructor']) and a['name'] != classname and not "static" in a['rtnType'])]:
             templateArgs['methodBinders'] += renderMethod(classname, method)
        fileContent = Template(classTemplate()).substitute(templateArgs); 
        f = open(os.path.join(targetDir, fileNameFromClass(classname)), 'w')
        f.write(fileContent)
        f.close()
        addedClasses.append(classname)
    return addedClasses


def generateModuleFiles(module, classList):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp')
    f = open(os.path.join(targetDir, module+'.pri'), 'w')
    f.write("HEADERS += $$PWD/"+module+".h\n\nSOURCES += "+" ".join(map(lambda c: "$$PWD/"+module+"/"+fileNameFromClass(c), classList))+"\n")
    f.close()

    f = open(os.path.join(targetDir, module+'.h'), 'w')
    f.write("\n".join(map(lambda c: "static inline void bind_"+module+"_"+sanitizeName(c)+"(vu8::Module &module);", classList)))
    f.close()
    print "asddsa"

def get_info(node, depth=0):
    children = [get_info(c, depth+1) for c in node.get_children()]
    return { 
             'kind' : node.kind,
             'usr' : node.get_usr(),
             'spelling' : node.spelling,
             'location' : node.location,
             'extent.start' : node.extent.start,
             'extent.end' : node.extent.end,
             'is_definition' : node.is_definition(),
             'children' : children }

def get_diag_info(diag):
    return { 'severity' : diag.severity,
             'location' : diag.location,
             'spelling' : diag.spelling,
             'ranges' : diag.ranges,
             'fixits' : diag.fixits }

def recursive_iterator(node):
    yield node
    for c in node.get_children():
        for c1 in recursive_iterator(c):
            yield c1

def retrieve_classes(node):
    for n in recursive_iterator(node):
        if n.kind == CursorKind.CLASS_DECL and n.is_definition():
            yield n

def retrieve_class_parents(node):
    for n in node.get_children():
        if n.kind == CursorKind.CXX_BASE_SPECIFIER:
            for br in n.get_children():
                if br.kind == CursorKind.TYPE_REF:
                    yield br.referenced

def retrieve_class_constructors(node):
    for n in node.get_children():
        if n.kind == CursorKind.CONSTRUCTOR:
            yield n

def retrieve_class_destructors(node):
    for n in node.get_children():
        if n.kind == CursorKind.DESTRUCTOR:
            yield n

def retrieve_class_methods(node):
    for n in node.get_children():
        if n.kind == CursorKind.CXX_METHOD:
            yield n

index = Index.create()
parsed_classes = {}
def parseFile(path):
    tu = index.parse(None, ['-x', 'c++', path, '-I', rootdir])

    if not tu:
        raise "unable to load input"

    if len(tu.diagnostics):
        pprint(('diags', map(get_diag_info, tu.diagnostics)))
    #pprint(('nodes', get_info(tu.cursor)))
    for c in retrieve_classes(tu.cursor):
        if c.displayname not in parsed_classes:
            parsed_classes[c.displayname] = True
            print "class:\n\n", c.displayname, ' '.join([p.displayname for p in retrieve_class_parents(c)]), ' ', c.location
            print 'constructors:\n',  ' '.join([p.displayname for p in retrieve_class_constructors(c)])
            print 'destructors:\n',  ' '.join([p.displayname for p in retrieve_class_destructors(c)])
            print 'methods:\n',  ' '.join([p.displayname for p in retrieve_class_methods(c)])
            #pprint(get_info(c))

for (module, dir) in [ \
        (module, dir) for (module, dir) in [ \
            (module, os.path.join(rootdir, module)) for module in os.listdir(rootdir) \
        ] if not module in [".",".."] and os.path.isdir(dir) \
    ]:
    print "top level dir: ", module,  dir
    classList = []
    for file in os.listdir(dir):
        pass
    if True:
        file = 'qabstractanimation.h'
        path = os.path.join(dir, file)
        if os.path.isfile(path):
            print "processing ", module, file
            #cppinfo = parse(path)
            #classList.extend(generateCppBindings(module, cppinfo, file))
            #print_class(cppinfo)
                
            parseFile(path)
            sys.stdout.flush()
        #classList = list(set(classList))
        #generateModuleFiles(module, classList)

