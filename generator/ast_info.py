
import re
from clang.cindex import Index
from clang.cindex import CursorKind
from clang.cindex import TypeKind
from clang.cindex import TokenKind
from ctypes import ArgumentError


def retrieve_semantic_parents_chain(node):
    ret = []
    node = node.semantic_parent
    while node and node.kind not in [CursorKind.TRANSLATION_UNIT]:
        ret.append(node)
        node = node.semantic_parent
    ret.reverse()
    return ret


def type_to_string(type, template_params):
    ret = ''
    if type.is_const_qualified():
        ret += 'const '
    if type.kind == TypeKind.POINTER:
        ret += type_to_string(type.get_pointee(), template_params) + ' *'
    elif type.kind == TypeKind.LVALUEREFERENCE:
        ret += type_to_string(type.get_pointee(), template_params) + ' &'
    elif type.kind == TypeKind.VOID:
        ret += 'void'
    elif type.kind == TypeKind.RECORD:
        try:
            ret += semantic_name(type.get_declaration(), template_params)
        except ArgumentError:
            ret += "ERROR"
    elif type.kind == TypeKind.CHAR_S:
        ret += 'char'
    elif type.kind == TypeKind.SCHAR:
        ret += 'signed char'
    elif type.kind == TypeKind.UCHAR:
        ret += 'unsigned char'
    elif type.kind == TypeKind.WCHAR:
        ret += 'wchar_t'
    elif type.kind == TypeKind.SHORT:
        ret += 'short'
    elif type.kind == TypeKind.USHORT:
        ret += 'unsigned short'
    elif type.kind == TypeKind.INT:
        ret += 'int'
    elif type.kind == TypeKind.UINT:
        ret += 'unsigned int'
    elif type.kind == TypeKind.BOOL:
        ret += 'bool'
    elif type.kind == TypeKind.LONG:
        ret += 'long'
    elif type.kind == TypeKind.ULONG:
        ret += 'unsigned long'
    elif type.kind == TypeKind.LONGLONG:
        ret += 'long long'
    elif type.kind == TypeKind.ULONGLONG:
        ret += 'unsigned long long'
    elif type.kind == TypeKind.FLOAT:
        ret += 'float'
    elif type.kind == TypeKind.DOUBLE:
        ret += 'double'
    elif type.kind == TypeKind.ENUM:
        ret += semantic_name(type.get_declaration(), template_params)
    else:
        ret += 'UNKNOWN: ' + type.kind.spelling
    return ret


def get_info(node, levels=100, print_type=True):
    if levels > 0:
        children = [get_info(c, levels - 1) for c in node.get_children()]
    else:
        children = None
    if print_type:
        type = type_to_string(node.type.get_canonical(), {})
        resultType = type_to_string(node.result_type.get_canonical(), {})
    else:
        type = None
        resultType = None
    return {
        'kind': node.kind,
        'displayname': node.displayname,
        'type': type,
        'usr': node.get_usr(),
        'spelling': node.spelling,
        'location': node.location,
        'extent.start': node.extent.start,
        'extent.end': node.extent.end,
        'is_definition': node.is_definition(),
        'resultType': resultType,
        'access': node.access,
        'children': children,
        }


def get_diag_info(diag):
    return {
        'severity': diag.severity,
        'location': diag.location,
        'spelling': diag.spelling,
        'ranges': diag.ranges,
        'fixits': diag.fixits,
        }


def recursive_iterator(node):
    yield node
    for c in node.get_children():
        for c1 in recursive_iterator(c):
            yield c1


"""
    return (classname, classnode, classfile)
"""
def retrieve_classes(node):
    classTemplates = {}
    for n in recursive_iterator(node):
        if n.kind == CursorKind.CLASS_TEMPLATE and n.is_definition():
            name = semantic_name(n)
            template = name[:(name.index('<'))]
            classTemplates[template] = n

    for n in recursive_iterator(node):
        if n.kind == CursorKind.CLASS_DECL and n.is_definition():
            yield (semantic_name(n), n, n.location.file.name)
        if n.kind == CursorKind.PARM_DECL:
            for x in retrieve_used_types(n):
                if x.kind == CursorKind.CLASS_DECL and x.displayname.endswith(">"):
                    name = semantic_name(x)
                    template = name[:(name.index('<'))]
                    if template in classTemplates:
                        yield (name, classTemplates[template], n.location.file.name)


def retrieve_template_params(node):
    for c in node.get_children():
        if c.kind == CursorKind.TEMPLATE_TYPE_PARAMETER:
            yield c


def is_class_template(node):
    return node.kind == CursorKind.CLASS_TEMPLATE

def is_node_existing(node):
    return CursorKind.NO_DECL_FOUND != node.type

def retrieve_used_types(node):
    for n in recursive_iterator(node):
        if n.type:
            td = n.type.get_canonical().get_declaration()
            if td and td.location.file:
                yield td
        if n.result_type:
            td = n.result_type.get_canonical().get_declaration()
            if td and td.location.file:
                yield td


def retrieve_class_parents(node):
    for n in node.get_children():
        if n.kind == CursorKind.CXX_BASE_SPECIFIER and n.access == 'public':
            td = n.type.get_declaration()
            if td:
                yield td


def retrieve_class_parents_recursive(node):
    for n in retrieve_class_parents(node):
        yield n
        for n1 in retrieve_class_parents_recursive(n):
            yield n1


def retrieve_class_constructors(node):
    access = 'private'
    for n in node.get_children():
        if n.access != None:
            access = n.access
        if n.kind == CursorKind.CONSTRUCTOR and access == 'public':
            yield n


def retrieve_class_destructors(node):
    for n in node.get_children():
        if n.kind == CursorKind.DESTRUCTOR:
            yield n


def retrieve_class_methods(node):
    access = 'private'
    for n in node.get_children():
        if CursorKind.CXX_ACCESS_SPEC_DECL == n.kind:
            access = n.access
        if n.kind == CursorKind.CXX_METHOD and not n.is_static_method():
            yield (access, n)


def retrieve_method_params(node):
    for n in node.get_children():
        if n.kind == CursorKind.PARM_DECL:
            yield n


def parse_method_usr(usrString):
    m = re.search(r'#([0-9]+)$', usrString)
    if m:
        i = int(m.group(1))
        return {'const': i & 1 != 0, 'volatile': i & 4 != 0,
                'restrict': i & 2 != 0}
    return {'const': False, 'volatile': False, 'restrict': False}


def node_name(node, template_params):
    if is_class_template(node):
        try:
            return node.spelling+'<'+\
                ','.join([template_params[p.displayname] for p in retrieve_template_params(node)])+\
                ' >'
        except KeyError as e:
            print "WARNING: no template key found for ",node.displayname,": ",e
    return node.displayname


def semantic_name(node, template_params = {}):
    name = node_name(node, template_params)
    if name.startswith('::'):
        return name
    parents = '::'.join([node_name(p, template_params) for p in
                        retrieve_semantic_parents_chain(node)])
    if parents and not parents.startswith('::'):
        parents = '::' + parents
    return parents + '::' + name


def retrieve_base_type_declaration(type):
    type = type.get_canonical()
    if type.kind == TypeKind.LVALUEREFERENCE:
        type = type.get_pointee()
    if type.kind == TypeKind.POINTER:
        type = type.get_pointee()
    return type.get_declaration()


def param_has_default_option(param):
    for x in param.get_tokens():
        if TokenKind.PUNCTUATION == x.kind and '=' == x.spelling:
            return True
    return False


def method_first_optional_param(cppMethod):
    i = 0
    for p in retrieve_method_params(cppMethod):
        if param_has_default_option(p):
            return i
        i += 1
    return None


def method_has_optional_params(m):
    return None != method_first_optional_param(m)

