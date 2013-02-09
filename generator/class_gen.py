
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
        classBinder.Set<$method_type, &$className::$method >("$method");"""


def method_template_base():
    return """
        classBinder.Set<$base, $method_type, &$className::$method >("$method");"""


def method_params(cpp_method, param_limit=None):
    params = ast_info.retrieve_method_params(cpp_method)
    if None != param_limit:
        params = list(params)[:param_limit]
    return ', '.join([ast_info.type_to_string(p.type.get_canonical()) for p in params])


def is_type_blacklisted(cpp_type):
    return  config.should_skip_class(
                ast_info.semantic_name(ast_info.retrieve_base_type_declaration(cpp_type))
            ) \
            or ('UNKNOWN:' in ast_info.type_to_string(cpp_type.get_canonical()))


def are_method_params_blacklisted(cpp_method):
    if is_type_blacklisted(cpp_method.result_type):
        return True
    for param in ast_info.retrieve_method_params(cpp_method):
        if is_type_blacklisted(param.type):
            return True
    return False


def method_type(cpp_method, param_limit = None):
    constness = ' const' if ast_info.parse_method_usr(cpp_method.get_usr())['const'] else ''
    return ast_info.type_to_string(cpp_method.result_type.get_canonical()) + \
        '('+method_params(cpp_method, param_limit)+')' + \
        constness


def method_definition(cpp_method, param_limit = None):
    constness = ' const' if ast_info.parse_method_usr(cpp_method.get_usr())['const'] else ''
    return ast_info.type_to_string(cpp_method.result_type.get_canonical()) + \
        ' ' + cpp_method.spelling + \
        '('+method_params(cpp_method, param_limit)+')' + \
        constness


def render_constructors(constructors):
    if len(constructors) == 0:
        return 'vu8::Factory<>'
    elif len(constructors) == 1 and not ast_info.method_has_optional_params(constructors[0]):
        return 'vu8::Factory< ' + method_params(constructors[0]) + ' > '
    else:
        factories = []
        for constructor in constructors:
            param_count = len(list(ast_info.retrieve_method_params(constructor)))
            first_opt = ast_info.method_first_optional_param(constructor)
            if first_opt == None:
                first_opt = param_count
            for i in range(first_opt, param_count + 1):
                factories.append('vu8::Factory< ' + method_params(constructor, i) + ' > ')
        return 'vu8::FactorySelector< ' + ', '.join(factories) + ' > '


def render_method(classname, cpp_method, parent=None):
    if not parent:
        return Template(method_template()) \
            .substitute({
                'method_type':method_type(cpp_method),
                'className':classname,
                'method':cpp_method.spelling
            })
    else:
        return Template(method_template_base()) \
            .substitute({
                'method_type':method_type(cpp_method),
                'className':classname,
                'method':cpp_method.spelling,
                'base':parent
            })


def enumerate_optional_params(cpp_method):
    param_count = len(list(ast_info.retrieve_method_params(cpp_method)))
    first_opt = ast_info.method_first_optional_param(cpp_method)
    if first_opt == None:
        first_opt = param_count
    for i in range(first_opt, param_count+1):
        yield (i, list(ast_info.retrieve_method_params(cpp_method))[:i])


def render_methods(classname, methods, method_name):
    if len(methods) == 0:
        return ''
    elif len(methods) == 1 and not ast_info.method_has_optional_params(methods[0][1]):
        (parentname, cpp_method) = methods[0]
        return render_method((parentname if parentname else classname), cpp_method, parentname)
    else:
        method_binders = []
        for (pname, cppm) in methods:
            binding_class = (pname if pname else classname)
            for (i, _) in enumerate_optional_params(cppm):
                method_binders.append(
                    'vu8::Method<' + \
                        binding_class +', '+ method_type(cppm, i) +', &' + binding_class + '::' + cppm.spelling + \
                    ' > '
                )
        return "\n        classBinder.Set<vu8::Selector< " + ', '.join(method_binders) + " > > (\""+method_name+"\");"


def sanitize_name(name):
    return   re.sub(r'^::', '', name) \
            .replace('::', '_') \
            .replace(' ', '') \
            .replace('<', '_') \
            .replace('>', '_') \
            .replace(',', '_')


def file_name_from_class(classname):
    return sanitize_name(classname) + '.cpp'


def render_arg(param, number):
    return (param.spelling if param.spelling else 'arg_'+str(number))


def render_shell_constructor(shellname, params, classname):
    return shellname+'(' + \
           ', '.join([
               ast_info.type_to_string(p.type.get_canonical())+' '+ \
               render_arg(p, p_i) for (p_i, p) in enumerate(params)
           ]) + \
           ') : ' + classname + '(' + \
           ', '.join([
               render_arg(p, p_i) for (p_i, p) in enumerate(params)
           ]) + \
           ') {}'


def render_shell_constructors(constructors, classname, shellname):
    if len(constructors) == 0:
        return ''
    else:
        constructor_overrides = []
        for constructor in constructors:
            for (i, params) in enumerate_optional_params(constructor):
                constructor_overrides.append(
                    render_shell_constructor(shellname, params, classname)
                )
        return '\n'.join(constructor_overrides) + '\n'


def render_shell_method(method, params, method_class):
    constness = (' const' if ast_info.parse_method_usr(method.get_usr())['const'] else '')
    return  ast_info.type_to_string(method.result_type.get_canonical()) + ' ' + \
            method.spelling + '(' + \
            ', '.join([
                ast_info.type_to_string(p.type.get_canonical())+' '+ \
                render_arg(p, p_i) for (p_i, p) in enumerate(params)
            ]) + \
            ')' + constness + '\n{\n' + \
            '  return '+method_class+'::'+method.spelling+'(' + \
            ', '.join([
                render_arg(p, p_i) for (p_i, p) in enumerate(params)
            ]) + \
            ');\n}\n'


def render_shell_methods(methods_by_name, classname, shellname):
    method_overrides = []
    for (_, methods_for_name) in methods_by_name.items():
        for (method_class, method) in methods_for_name:
            if ast_info.method_has_optional_params(method):
                for (i, params) in enumerate_optional_params(method):
                    method_overrides.append(
                       render_shell_method(method, params, method_class)
                    )
    return '\n'.join(method_overrides)+'\n'


def generate_shell(cpp_class, module, classname, shellname, methods):
    return 'class '+shellname+' : public '+classname+' {\npublic:\n' + \
        render_shell_constructors(get_class_constructors(cpp_class), classname, shellname) + \
        '\n' + \
        render_shell_methods(methods, classname, shellname) + \
        '};'


def generate_class(cpp_class, module, rootdir):
    target_dir = os.path.join(MYDIR, '..', 'generated_cpp', module)
    if not os.path.isdir(target_dir):
        os.makedirs(target_dir)

    template_args = {'module':module}

    classname = ast_info.semantic_name(cpp_class)
    shellname = '_Shell_'+sanitize_name(classname)
    methods_by_name = get_class_methods(cpp_class, classname, shellname)

    template_args['className'] = shellname
    template_args['includes'] = "\n".join(["#include <"+path+">" for path in get_includes(cpp_class, rootdir)])
    template_args['safeClassName'] = sanitize_name(classname)
    template_args['constructors'] = render_constructors(get_class_constructors(cpp_class))
    template_args['methodBinders'] = ''
    template_args['shell_class_code'] = generate_shell(cpp_class, module, classname, shellname, methods_by_name)

    for (name, methods) in methods_by_name.items():
        methods = [(shellname if ast_info.method_has_optional_params(mt) else cl, mt) for (cl, mt) in methods]
        template_args['methodBinders'] += render_methods(classname, methods, name)

    update_file(
        os.path.join(target_dir, file_name_from_class(classname)),
        Template(class_template()).substitute(template_args)
    )


def get_includes(classnode, rootdir):
    used_type_paths = set([t.location.file.name for t in ast_info.retrieve_used_types(classnode)]) | \
                    set([
                        t.location.file.name for p in ast_info.retrieve_class_parents(classnode) \
                        for t in ast_info.retrieve_used_types(p)
                    ])
    return sorted(set([
        path for path in used_type_paths if path.startswith(rootdir) and not config.is_include_blacklisted(path)
    ]))


def get_class_constructors(classnode):
    return list(itertools.ifilterfalse(
        are_method_params_blacklisted, ast_info.retrieve_class_constructors(classnode)
    ))


def get_class_methods(cpp_class, classname, shellname):
    methods_by_name = {}
    added_methods = {}
    for (access, method) in ast_info.retrieve_class_methods(cpp_class):
        if should_include_method(classname, method, access):
            if method.spelling not in methods_by_name:
                methods_by_name[method.spelling] = []
            methods_by_name[method.spelling].append( (classname, method) )
        added_methods[method_definition(method)] = True

    for base in ast_info.retrieve_class_parents(cpp_class):
        for (access, method) in ast_info.retrieve_class_methods(base):
            mdef = method_definition(method)
            rel_basename = shellname+classname[classname.rindex('::'):]+"::"+base.displayname
            abs_basename = ast_info.semantic_name(base)
            if mdef not in added_methods and should_include_method(abs_basename, method, access):
                if method.spelling not in methods_by_name:
                    methods_by_name[method.spelling] = []
                methods_by_name[method.spelling].append( (rel_basename, method) )
                added_methods[mdef] = True
    
    return methods_by_name


def should_include_method(classname, method, access):
    return not config.should_skip_class_method(classname, method.spelling) \
           and not are_method_params_blacklisted(method) \
           and access == 'public'


def update_file(filename, file_content):
    if not is_file_content_same(filename, file_content):
        target_file = open(filename, 'w')
        target_file.write(file_content)
        target_file.close()


def is_file_content_same(filename, file_content):
    orig_content = ''
    try:
        target_file = open(filename, 'r')
        orig_content = target_file.read()
        target_file.close()
    except IOError:
        return False

    return file_content == orig_content


