
import os
import re
from string import Template
import ast_info
import config
import itertools

MYDIR = os.path.dirname(os.path.realpath(__file__))


def class_template():
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


def method_template():
    return """
        classBinder.Set<$methodType, &$className::$method >("$method");"""


def method_template_base():
    return """
        classBinder.Set<$base, $methodType, &$className::$method >("$method");"""


def method_params(cpp_method, n=None):
    params = ast_info.retrieve_method_params(cpp_method)
    if None != n:
        params = list(params)[:n]
    return ', '.join([ast_info.type_to_string(p.type.get_canonical())
                     for p in params])


def isTypeBlackListed(type):
    return config.should_skip_class(ast_info.semantic_name(ast_info.retrieve_base_type_declaration(type)))


def is_method_params_type_blacklisted(cpp_method):
    if isTypeBlackListed(cpp_method.result_type):
        return True
    for p in ast_info.retrieve_method_params(cpp_method):
        if isTypeBlackListed(p.type):
            return True
    return False

def methodType(cpp_method, n = None):
    constness = ' const' if ast_info.parse_method_usr(cpp_method.get_usr())['const'] else ''
    return ast_info.type_to_string(cpp_method.result_type.get_canonical())+'('+method_params(cpp_method, n)+')' + constness

def methodDefinition(cpp_method, n = None):
    constness = ' const' if ast_info.parse_method_usr(cpp_method.get_usr())['const'] else ''
    return ast_info.type_to_string(cpp_method.result_type.get_canonical())+' '+cpp_method.spelling+'('+method_params(cpp_method, n)+')' + constness

def render_constructors(constructors):
    if len(constructors) == 0:
        return 'vu8::Factory<>'
    elif len(constructors) == 1 and not ast_info.method_has_optional_params(constructors[0]):
        return 'vu8::Factory< '+method_params(constructors[0])+' > '
    else:
        factories = []
        for c in constructors:
            param_count = len(list(ast_info.retrieve_method_params(c)))
            first_opt = ast_info.method_first_optional_param(c)
            if first_opt == None:
                first_opt = param_count
            for i in range(first_opt, param_count+1):
                factories.append('vu8::Factory< '+method_params(c, i)+' > ')
        return 'vu8::FactorySelector< ' + ', '.join(factories) + ' > '

def render_method(classname, cpp_method, parent = None):
    if not parent:
        return Template(method_template()) \
            .substitute({'methodType':methodType(cpp_method), 'className':classname, 'method':cpp_method.spelling})
    else:
        return Template(method_template_base()) \
            .substitute({'methodType':methodType(cpp_method), 'className':classname, 'method':cpp_method.spelling, 'base':parent})

def render_methods(classname, methods, method_name):
    if len(methods) == 0:
        return ''
    elif len(methods) == 1 and not ast_info.method_has_optional_params(methods[0][1]):
        (parentname, cpp_method) = methods[0]
        return render_method(parentname if parentname else classname, cpp_method, parentname)
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
        return "\n        classBinder.Set<vu8::Selector< " + ', '.join(method_binders) + " > > (\""+method_name+"\");"

def sanitize_name(name):
    return re.sub(r'^::', '', name).replace('::', '_').replace(' ', '').replace('<', '_').replace('>', '_').replace(',', '_')

def file_name_from_class(classname):
    return sanitize_name(classname)+".cpp"

def render_shell_constructors(constructors, classname, shellname):
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


def render_shell_methods(methods_by_name, classname, shellname):
    method_overrides = []
    for (name, methods_for_name) in methods_by_name.items():
        for (cl, method) in methods_for_name:
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
        render_shell_constructors(get_class_constructors(c), classname, shellname)+\
        '\n'+\
        render_shell_methods(methods, classname, shellname)+\
        '};';


def generate_class(c, module, rootdir):
    targetDir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(targetDir):
        os.makedirs(targetDir)

    template_args = {'module':module}

    classname = ast_info.semantic_name(c)
    shellname = '_Shell_'+sanitize_name(classname)
    methods_by_name = get_class_methods(c, classname, shellname)

    template_args['className'] = shellname
    template_args['includes'] = "\n".join(["#include <"+path+">" for path in get_includes(c, rootdir)])
    template_args['safeClassName'] = sanitize_name(classname)
    template_args['constructors'] = render_constructors(get_class_constructors(c))
    template_args['methodBinders'] = ''
    template_args['shell_class_code'] = generate_shell(c, module, classname, shellname, methods_by_name)

    for (name, methods) in methods_by_name.items():
        methods = [(shellname if ast_info.method_has_optional_params(mt) else cl, mt) for (cl, mt) in methods]
        template_args['methodBinders'] += render_methods(classname, methods, name)

    update_file(
        os.path.join(targetDir, file_name_from_class(classname)),
        Template(class_template()).substitute(template_args)
    );


def get_includes(classnode, rootdir):
    usedTypePaths = set([t.location.file.name for t in ast_info.retrieve_used_types(classnode)]) | \
                    set([t.location.file.name for p in ast_info.retrieve_class_parents(classnode) for t in ast_info.retrieve_used_types(p)])
    return sorted(set([path for path in usedTypePaths if path.startswith(rootdir) and not config.is_include_blacklisted(path)]))


def get_class_constructors(classnode):
    return list(itertools.ifilterfalse(is_method_params_type_blacklisted, ast_info.retrieve_class_constructors(classnode)))

def get_class_methods(c, classname, shellname):
    methods_by_name = {}
    added_methods = {}
    for (access, method) in ast_info.retrieve_class_methods(c):
        if should_include_method(classname, method, access):
            if method.spelling not in methods_by_name:
                methods_by_name[method.spelling] = []
            methods_by_name[method.spelling].append( (classname, method) );
        added_methods[methodDefinition(method)] = True

    for base in ast_info.retrieve_class_parents(c):
        for (access, method) in ast_info.retrieve_class_methods(base):
            mdef = methodDefinition(method)
            rel_basename = shellname+classname[classname.rindex('::'):]+"::"+base.displayname
            abs_basename = ast_info.semantic_name(base)
            if mdef not in added_methods and should_include_method(abs_basename, method, access):
                if method.spelling not in methods_by_name:
                    methods_by_name[method.spelling] = []
                methods_by_name[method.spelling].append( (rel_basename, method) );
                added_methods[mdef] = True
    
    return methods_by_name


def should_include_method(classname, method, access):
    return not config.should_skip_class_method(classname, method.spelling) and not is_method_params_type_blacklisted(method) and access == 'public'


def update_file(filename, file_content):
    if not is_file_content_same(filename, file_content):
        f = open(filename, 'w')
        f.write(file_content)
        f.close()


def is_file_content_same(filename, file_content):
    orig_content = ''
    try:
        f = open(filename, 'r')
        orig_content = f.read()
        f.close()
    except IOError:
        return False

    return file_content == orig_content


