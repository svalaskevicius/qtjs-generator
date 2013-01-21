#!/usr/bin/python

import sys, os, subprocess, re
from string import Template
#sys.path = ["../"] + sys.path
MYDIR = os.path.dirname(os.path.realpath(__file__))

import CppHeaderParser

if len(sys.argv) < 2:
    sys.exit('Usage: %s <Qt include directory>' % sys.argv[0])

if not os.path.exists(sys.argv[1]):
    sys.exit('ERROR: the path specified (%s) was not found!' % sys.argv[1])

rootdir = sys.argv[1]


def print_class(cppHeader):
    print "CppHeaderParser info:"

    for classname in cppHeader.classes:
        print "class definition:"
        print classname
        classDefinition = cppHeader.classes[classname]
        # print [prop for prop in classDefinition.properties]
        print [method for method in classDefinition.get_method_names()]
        #print [enum for enum in classDefinition.enums]
        #print [struct for struct in classDefinition.structs]

    #print "\nFree functions are:"
    #for func in cppHeader.functions:
    #    print " %s"%func["name"]


def parse(file):
    fd = open(file)
    content = "".join(fd.readlines())
    fd.close()
    content = '#include "qglobal.h"\n' + content.replace('#include', '@include')
    p = subprocess.Popen(\
        'cpp -pipe', shell=True, stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=subprocess.STDOUT, \
        cwd=os.path.join(MYDIR, 'includes') \
    )
    (out, err) = p.communicate(content)
    out = re.sub(r'\n{3,}', '\n', out.replace('\r','').replace('@include', '#include'));
    #print re.findall('^(.*)___EXPORTED_API___[\s\n]+(.*)$', out, re.MULTILINE);
    #out = re.sub(r'[\s\n]*___EXPORTED_API___[\s\n]*', ' ', out);
    #print out
    return CppHeaderParser.CppHeader(out, 'string')

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
        for method in [a for a in classInfo['methods']['public'] if ((not a['constructor']) and a['name'] != classname)]:
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


for (module, dir) in [ \
        (module, dir) for (module, dir) in [ \
            (module, os.path.join(rootdir, module)) for module in os.listdir(rootdir) \
        ] if not module in [".",".."] and os.path.isdir(dir) \
    ]:
    print "top level dir: ", module,  dir
    classList = []
    for file in os.listdir(dir):
        path = os.path.join(dir, file)
        if os.path.isfile(path):
            try:
                print "processing ", module, file
                cppinfo = parse(path)
                classList.extend(generateCppBindings(module, cppinfo, file))
                #print_class(cppinfo)
            except (CppHeaderParser.CppParseError, AssertionError, RuntimeError) as  e:
                print "ERROR WHILE PARSING", file
                print e
        classList = list(set(classList))
        generateModuleFiles(module, classList)

