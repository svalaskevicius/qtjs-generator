
import os
import sys
import re
from string import Template
from clang.cindex import Index
import ast_info
import config
from pprint import pprint
import itertools

MYDIR = os.path.dirname(os.path.realpath(__file__))


def classTemplate():
    return """
#include <qtjs_bindings/shared.h>

$includes

namespace qtjs_binder {

$shell_class_code

void bind_${module}_$safeClassName(vu8::Module &module)
{
    vu8::Class<$className> classBinder;

    classBinder.Constructor< $constructors >();

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


def methodParams(cppMethod, n=None):
    params = ast_info.retrieve_method_params(cppMethod)
    if None != n:
        params = list(params)[:n]
    return ', '.join([ast_info.type_to_string(p.type.get_canonical())
                     for p in params])


def isTypeBlackListed(type):
    return config.should_skip_class(ast_info.semantic_name(ast_info.retrieve_base_type_declaration(type)))


def methodParamsTypeBlackListed(cppMethod):
    if isTypeBlackListed(cppMethod.result_type):
        return True
    for p in ast_info.retrieve_method_params(cppMethod):
        if isTypeBlackListed(p.type):
            return True
    return False

def methodType(cppMethod, n = None):
    constness = ' const' if ast_info.parse_method_usr(cppMethod.get_usr())['const'] else ''
    return ast_info.type_to_string(cppMethod.result_type.get_canonical())+'('+methodParams(cppMethod, n)+')' + constness

def methodDefinition(cppMethod, n = None):
    constness = ' const' if ast_info.parse_method_usr(cppMethod.get_usr())['const'] else ''
    return ast_info.type_to_string(cppMethod.result_type.get_canonical())+' '+cppMethod.spelling+'('+methodParams(cppMethod, n)+')' + constness

def renderConstructors(constructors):
    if len(constructors) == 0:
        return 'vu8::Factory<>'
    elif len(constructors) == 1 and not ast_info.method_has_optional_params(constructors[0]):
        return 'vu8::Factory< '+methodParams(constructors[0])+' > '
    else:
        factories = []
        for c in constructors:
            param_count = len(list(ast_info.retrieve_method_params(c)))
            first_opt = ast_info.method_first_optional_param(c)
            if first_opt == None:
                first_opt = param_count
            for i in range(first_opt, param_count+1):
                factories.append('vu8::Factory< '+methodParams(c, i)+' > ')
        return 'vu8::FactorySelector< ' + ', '.join(factories) + ' > '

def renderMethod(classname, cppMethod, parent = None):
    if not parent:
        return Template(methodTemplate()) \
            .substitute({'methodType':methodType(cppMethod), 'className':classname, 'method':cppMethod.spelling})
    else:
        return Template(baseMethodTemplate()) \
            .substitute({'methodType':methodType(cppMethod), 'className':classname, 'method':cppMethod.spelling, 'base':parent})

def renderMethods(classname, methods, methodName):
    if len(methods) == 0:
        return ''
    elif len(methods) == 1 and not ast_info.method_has_optional_params(methods[0][1]):
        (parentname, cppMethod) = methods[0]
        return renderMethod(parentname if parentname else classname, cppMethod, parentname)
    else:
        method_binders = []
        for (pname, cppm) in methods:
            param_count = len(list(ast_info.retrieve_method_params(cppm)))
            first_opt = ast_info.method_first_optional_param(cppm)
            binding_class = pname if pname else classname
            if first_opt == None:
                first_opt = param_count
            for i in range(first_opt, param_count+1):
                method_binders.append('vu8::Method<' + binding_class +', '+ methodType(cppm, i) +', &' + binding_class + '::' + cppm.spelling +' > ')
        return "\n        classBinder.Set<vu8::Selector< " + ', '.join(method_binders) + " > > (\""+methodName+"\");"

def sanitizeName(name):
    return re.sub(r'^::', '', name).replace('::', '_').replace(' ', '').replace('<', '_').replace('>', '_').replace(',', '_')

def fileNameFromClass(classname):
    return sanitizeName(classname)+".cpp"

def renderShellConstructors(constructors, classname, shellname):
    if len(constructors) == 0:
        return ''
    else:
        constructor_overrides = []
        for c in constructors:
            param_count = len(list(ast_info.retrieve_method_params(c)))
            first_opt = ast_info.method_first_optional_param(c)
            if first_opt == None:
                first_opt = param_count
            for i in range(first_opt, param_count+1):
                params = list(ast_info.retrieve_method_params(c))[:i]
                constructor_overrides.append(shellname+'('+\
                    ', '.join([ast_info.type_to_string(p.type.get_canonical())+' '+(p.spelling if p.spelling else 'arg_'+str(p_i)) for (p_i, p) in enumerate(params)])+\
                    ') : '+classname+'('+\
                    ', '.join([(p.spelling if p.spelling else 'arg_'+str(p_i)) for (p_i, p) in enumerate(params)])+\
                    ') {}')
        return '\n'.join(constructor_overrides)+'\n'

def renderShellMethods(methodsByName, classname, shellname):
    method_overrides = []
    for (name, methodsForName) in methodsByName.items():
        for (cl, method) in methodsForName:
            first_opt = ast_info.method_first_optional_param(method)
            if None != first_opt:
                param_count = len(list(ast_info.retrieve_method_params(method)))
                constness = ' const' if ast_info.parse_method_usr(method.get_usr())['const'] else ''
                for i in range(first_opt, param_count+1):
                    params = list(ast_info.retrieve_method_params(method))[:i]
                    method_overrides.append(
                        ast_info.type_to_string(method.result_type.get_canonical())+' '+method.spelling+'('+\
                        ', '.join([ast_info.type_to_string(p.type.get_canonical())+' '+(p.spelling if p.spelling else 'arg_'+str(p_i)) for (p_i, p) in enumerate(params)]) + \
                        ')' + constness + '\n{\n' +\
                        '  return '+cl+'::'+method.spelling+'('+\
                        ', '.join([(p.spelling if p.spelling else 'arg_'+str(p_i)) for (p_i, p) in enumerate(params)])+\
                        ');\n}\n');
    return '\n'.join(method_overrides)+'\n'

def generate_shell(c, module, classname, shellname, methods):
    return 'class '+shellname+' : public '+classname+' {\npublic:\n'+\
        renderShellConstructors(list(itertools.ifilterfalse(methodParamsTypeBlackListed, ast_info.retrieve_class_constructors(c))), classname, shellname)+\
        renderShellMethods(methods, classname, shellname)+\
        '};';


def generate_class(c, module, rootdir):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)

    templateArgs = {'module':module}

    classname = ast_info.semantic_name(c)
    shellname = '_Shell_'+sanitizeName(classname)
    templateArgs['className'] = shellname
    # move
    usedTypePaths = set([t.location.file.name for t in ast_info.retrieve_used_types(c)])
    usedTypePaths |= set([t.location.file.name for p in ast_info.retrieve_class_parents(c) for t in ast_info.retrieve_used_types(p)])
    templateArgs['includes'] = "\n".join(set(["#include <"+path+">" for path in usedTypePaths if path.startswith(rootdir) and not config.is_include_blacklisted(path)]))
    templateArgs['safeClassName'] = sanitizeName(classname)

    templateArgs['constructors'] = renderConstructors(list(itertools.ifilterfalse(methodParamsTypeBlackListed, ast_info.retrieve_class_constructors(c))))

    templateArgs['methodBinders'] = ''

    methodsByName = get_class_methods(c, classname, shellname)

    templateArgs['shell_class_code'] = generate_shell(c, module, classname, shellname, methodsByName)

    for (name, methods) in methodsByName.items():
        methods = [(shellname if ast_info.method_has_optional_params(mt) else cl, mt) for (cl, mt) in methods]
        templateArgs['methodBinders'] += renderMethods(classname, methods, name)

    update_file(
        os.path.join(targetDir, fileNameFromClass(classname)),
        Template(classTemplate()).substitute(templateArgs)
    );

def get_class_methods(c, classname, shellname):
    methodsByName = {}
    addedMethods = {}
    for (access, method) in ast_info.retrieve_class_methods(c):
        if not config.should_skip_class_method(classname, method.spelling) and not methodParamsTypeBlackListed(method) and access == 'public':
            if method.spelling not in methodsByName:
                methodsByName[method.spelling] = []
            methodsByName[method.spelling].append( (classname, method) );
        addedMethods[methodDefinition(method)] = True

    for base in ast_info.retrieve_class_parents(c):
        for (access, method) in ast_info.retrieve_class_methods(base):
            mdef = methodDefinition(method)
            rel_basename = shellname+classname[classname.rindex('::'):]+"::"+base.displayname
            abs_basename = ast_info.semantic_name(base)
            if access == 'public' and mdef not in addedMethods and not config.should_skip_class_method(abs_basename, method.spelling) and not methodParamsTypeBlackListed(method):
                if method.spelling not in methodsByName:
                    methodsByName[method.spelling] = []
                methodsByName[method.spelling].append( (rel_basename, method) );
                addedMethods[mdef] = True
    
    return methodsByName


def update_file(filename, fileContent):
    if not is_file_content_same(filename, fileContent):
        f = open(filename, 'w')
        f.write(fileContent)
        f.close()


def is_file_content_same(filename, fileContent):
    origContent = ''
    try:
        f = open(filename, 'r')
        origContent = f.read()
        f.close()
    except IOError:
        return False

    return fileContent == origContent


