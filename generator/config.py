
def should_skip_class(classname):
    return classname in ['QAbstractAnimation', 'QObjectData']

def should_skip_class_method(classname, method):
    return classname+"::"+method in ["QObject::objectNameChanged"]

