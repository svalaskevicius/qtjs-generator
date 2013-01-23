
from string import Template
from clang.cindex import Index
import ast_info



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

def generate_cpp_bindings(module, cppinfo, header):
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
        for method in [a for a in classInfo['methods']['public'] if ((not a['constructor']) and a['name'] != classname and not "static" in a['rtnType'])]:
             templateArgs['methodBinders'] += renderMethod(classname, method)
        fileContent = Template(classTemplate()).substitute(templateArgs); 
        f = open(os.path.join(targetDir, fileNameFromClass(classname)), 'w')
        f.write(fileContent)
        f.close()
        addedClasses.append(classname)
    return addedClasses



def generate_class(c):
    print "class:\n", c.displayname, ' '.join([p.displayname for p in ast_info.retrieve_class_parents(c)]), ' ', c.location
    print 'constructors:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_constructors(c)])
    print 'destructors:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_destructors(c)])
    print 'methods:\n',  ' '.join([p.displayname for p in ast_info.retrieve_class_methods(c)])
