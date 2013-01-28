
import os, sys
from string import Template
from clang.cindex import Index
import ast_info, config
from pprint import pprint
import itertools


MYDIR = os.path.dirname(os.path.realpath(__file__))


def classTemplate():
    return """
#include <qtjs_bindings/shared.h>
#include <$header>

$includes

namespace qtjs_binder {

void bind_${module}_$safeClassName(vu8::Module &module)
{
    vu8::Class<$className, vu8::Factory<$constructorArgs> > classBinder;
    ${methodBinders}

    module("$safeClassName", classBinder);
}

} // namespace
    """

def methodTemplate():
    return """
        classBinder.Set<$methodType, &$className::$method >("$method");"""

def baseMethodTemplate():
    return """
        classBinder.Set<$base, $methodType, &$className::$method >("$method");"""

def methodParams(cppMethod):
    return ', '.join([ast_info.type_to_string(p.type.get_canonical()) for p in ast_info.retrieve_method_params(cppMethod)])

def isTypeBlackListed(type):
    return config.should_skip_class(ast_info.semantic_name(ast_info.retrieve_base_type_declaration(type)))

def methodParamsTypeBlackListed(cppMethod):
    if isTypeBlackListed(cppMethod.result_type):
        return True
    for p in ast_info.retrieve_method_params(cppMethod):
        if isTypeBlackListed(p.type):
            return True
    return False

def methodType(cppMethod):
    constness = ' const' if ast_info.parse_method_usr(cppMethod.get_usr())['const'] else ''
    return ast_info.type_to_string(cppMethod.result_type.get_canonical())+'('+methodParams(cppMethod)+')' + constness

def methodDefinition(cppMethod):
    constness = ' const' if ast_info.parse_method_usr(cppMethod.get_usr())['const'] else ''
    return ast_info.type_to_string(cppMethod.result_type.get_canonical())+' '+cppMethod.spelling+'('+methodParams(cppMethod)+')' + constness

def renderMethod(classname, cppMethod, parent = None):
    #pprint(ast_info.get_info(cppMethod))
    if not parent:
        return Template(methodTemplate()) \
            .substitute({'methodType':methodType(cppMethod), 'className':classname, 'method':cppMethod.spelling})
    else:
        return Template(baseMethodTemplate()) \
            .substitute({'methodType':methodType(cppMethod), 'className':classname, 'method':cppMethod.spelling, 'base':parent})

def sanitizeName(name):
    return name.replace('::', '_').replace(' ', '').replace('<', '_').replace('>', '_').replace(',', '_')

def fileNameFromClass(classname):
    return sanitizeName(classname)+".cpp"



def generate_class(c, module):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)

    templateArgs = {'module':module, 'header':c.location.file.name}

    classname = ast_info.semantic_name(c)
    templateArgs['className'] = classname
    templateArgs['includes'] = config.get_class_includes(classname)
    templateArgs['safeClassName'] = sanitizeName(classname)

    constructors = list(itertools.ifilterfalse(methodParamsTypeBlackListed, ast_info.retrieve_class_constructors(c)))
    if len(constructors) == 0:
        templateArgs['constructorArgs'] = ''
    else:
        templateArgs['constructorArgs'] = methodParams(constructors[0])
        if len(constructors) > 1:
            print "WARNING: more than one constructor: ", classname

    templateArgs['methodBinders'] = ''

    addedMethods = {}

    for (access, method) in ast_info.retrieve_class_methods(c):
        if not config.should_skip_class_method(classname, method.spelling) and not methodParamsTypeBlackListed(method) and access == 'public':
            templateArgs['methodBinders'] += renderMethod(classname, method)
        addedMethods[methodDefinition(method)] = True

    for base in ast_info.retrieve_class_parents(c):
        for (access, method) in ast_info.retrieve_class_methods(base):
            mdef = methodDefinition(method)
            rel_basename = classname+"::"+base.displayname
            abs_basename = ast_info.semantic_name(base)
            if access == 'public' and mdef not in addedMethods and not config.should_skip_class_method(abs_basename, method.spelling) and not methodParamsTypeBlackListed(method):
                templateArgs['methodBinders'] += renderMethod(rel_basename, method, rel_basename)
                addedMethods[mdef] = True

    fileContent = Template(classTemplate()).substitute(templateArgs); 

    f = open(os.path.join(targetDir, fileNameFromClass(classname)), 'w')
    f.write(fileContent)
    f.close()

