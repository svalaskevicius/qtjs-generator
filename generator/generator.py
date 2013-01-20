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
#include <qtjs_bindings/$module/shared.h>

namespace qtjs_binder {

static inline void bind_${module}_$class(vu8::Module &module)
{
    vu8::Class<$class, vu8::Factory<$constructorArgs> > classBinder;
    classBinder${methodBinders}
        ;
    module("$class", classBinder);
}

} // namespace
    """

def methodTemplate():
    return """
        .Set<$methodType, &$class::$method>("$method")"""

def methodParams(cppMethod):
    return ", ".join([a['type'] for a in cppMethod['parameters']])

def methodType(cppMethod):
    return cppMethod['rtnType'].replace("inline", "")+'('+methodParams(cppMethod)+')'

def renderMethod(classname, cppMethod):
    return Template(methodTemplate()) \
        .substitute({'methodType':methodType(cppMethod),'class':classname, 'method': cppMethod['name']})

def generateBindings(module, cppinfo):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)
    for classname [a for a in cppinfo.classes if not '<' in a]:
        classInfo = cppinfo.classes[classname]
        constructors = [a for a in classInfo['methods']['public'] if a['constructor']]
        templateArgs = {'module':module, 'class':classname}
        if len(constructors) == 0:
            templateArgs['constructorArgs'] = ''
        else:
            templateArgs['constructorArgs'] = methodParams(constructors[0])
            if len(constructors) > 1:
                print "WARNING: more than one constructor: ", classname
        templateArgs['methodBinders'] = ''
        for method in [a for a in classInfo['methods']['public'] if not a['constructor']]:
             templateArgs['methodBinders'] += renderMethod(classname, method)
        fileContent = Template(classTemplate()).substitute(templateArgs); 
        f = open(os.path.join(targetDir, classname+'.cpp'), 'w')
        f.write(fileContent)
        f.close()


for (module, dir) in [ \
        (module, dir) for (module, dir) in [ \
            (module, os.path.join(rootdir, module)) for module in os.listdir(rootdir) \
        ] if not module in [".",".."] and os.path.isdir(dir) \
    ]:
    print "top level dir: ", module,  dir
    for file in [file for file in [os.path.join(dir, file) for file in os.listdir(dir)] if os.path.isfile(file)]:
        try:
            print "processing ", file
            cppinfo = parse(file)
            generateBindings(module, cppinfo)
            print_class(cppinfo)
        except (CppHeaderParser.CppParseError, AssertionError, RuntimeError) as  e:
            print "ERROR WHILE PARSING", file
            print e


