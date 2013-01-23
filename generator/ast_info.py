
from clang.cindex import Index
from clang.cindex import CursorKind

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

