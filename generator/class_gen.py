
import os, sys
from string import Template
from clang.cindex import Index
import ast_info
from pprint import pprint


MYDIR = os.path.dirname(os.path.realpath(__file__))


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
    return ', '.join([ast_info.type_to_string(p.type.get_canonical()) for p in ast_info.retrieve_method_params(cppMethod)])

def methodType(cppMethod):
    return ast_info.type_to_string(cppMethod.result_type.get_canonical())+'('+methodParams(cppMethod)+')'

def renderMethod(classname, cppMethod):
    #pprint(ast_info.get_info(cppMethod))
    return Template(methodTemplate()) \
        .substitute({'methodType':methodType(cppMethod), 'className':classname, 'method':cppMethod.spelling})

def sanitizeName(name):
    return name.replace('::', '_').replace(' ', '').replace('<', '_').replace('>', '_')

def fileNameFromClass(classname):
    return sanitizeName(classname)+".cpp"



def generate_class(c, module, header):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)

    pprint(ast_info.get_info(c))
    #print targetDir
    #print "class:\n", c.displayname, ' '.join([p.displayname for p in ast_info.retrieve_class_parents(c)]), ' ', c.location
    #print 'constructors:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_constructors(c)]), "\n"
    #print 'constructors:'
    #for c in ast_info.retrieve_class_constructors(c):
    #    print '<', ', '.join([ast_info.type_to_string(p.type.get_canonical()) for p in ast_info.retrieve_method_params(c)]), '>'
    ##pprint([ast_info.get_info(p, False) for x in ast_info.retrieve_class_constructors(c) for p in ast_info.retrieve_method_params(x)] )
    #print 'destructors:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_destructors(c)])
    #print 'methods:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_methods(c)])

    templateArgs = {'module':module, 'header':header}

    classname = c.displayname
    templateArgs['className'] = classname
    templateArgs['safeClassName'] = sanitizeName(classname)

    constructors = list(ast_info.retrieve_class_constructors(c))
    if len(constructors) == 0:
        templateArgs['constructorArgs'] = ''
    else:
        templateArgs['constructorArgs'] = methodParams(constructors[0])
        if len(constructors) > 1:
            print "WARNING: more than one constructor: ", classname

    templateArgs['methodBinders'] = ''
    for method in ast_info.retrieve_class_methods(c):
        templateArgs['methodBinders'] += renderMethod(classname, method)

    fileContent = Template(classTemplate()).substitute(templateArgs); 

    f = open(os.path.join(targetDir, fileNameFromClass(classname)), 'w')
    f.write(fileContent)
    f.close()

