#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS


#include "llvmapi.h"
#include "dynamic_qobject.h"

#include <qqmlprivate.h>
#include <QQmlComponent>

#include <sstream>

#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/ExecutionEngine/Interpreter.h"
#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/Constants.h"
#include "llvm/DerivedTypes.h"
#include "llvm/IRBuilder.h"
#include "llvm/Instructions.h"
#include "llvm/LLVMContext.h"
#include "llvm/Module.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"

namespace qtjs_binder {

namespace {

void setIndexPtr(void *target, int index)
{
    using namespace QQmlPrivate;
    ((QQmlElement<DynamicQObject> *)target)->__setClassIdx(index);
}

std::string formatCountedName(std::string prefix, size_t counter)
{
    std::stringstream sa;

    sa << prefix << "_" << counter;

    return sa.str();
}

void static_metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    dynamicQObjectManager().metacall(classIdx, obj, _c, _id, _a);
}

}

struct LlvmpApiPrivate {
    llvm::LLVMContext *Context;
    std::vector<llvm::ExecutionEngine*> EEs;

    llvm::Module* createModule()
    {
        return new llvm::Module("main", *Context);
    }

    llvm::ExecutionEngine* createEngine(llvm::Module *M)
    {
        llvm::TargetOptions options;
        options.JITExceptionHandling = true;
        auto EE = llvm::EngineBuilder(M)
                .setTargetOptions(options)
                .create();
        EE->DisableSymbolSearching();
        EEs.push_back(EE);
        return EE;
    }
};

LlvmApi::LlvmApi()
{
    _p = new LlvmpApiPrivate();
    llvm::InitializeNativeTarget();
    _p->Context = new llvm::LLVMContext();
    closureCounter = 0;
}

LlvmApi::~LlvmApi()
{
    for (auto EE : _p->EEs) {
        delete EE;
    }
    delete _p->Context;
    delete _p;
    llvm::llvm_shutdown();
}

llvm::Function* generateFunctionWrapper(std::string name, llvm::Module *M, llvm::Type* retType, std::vector<llvm::Type*> args)
{
    using namespace llvm;
    return Function::Create(
                FunctionType::get(
                    retType,
                    args,
                    false
                    ),
                Function::ExternalLinkage,
                name,
                M
                );
}


CreateIntoFuncPtr LlvmApi::generateDynamicObjectCreateInto(int classIdx)
{
    using namespace llvm;

    closureCounter++;

    auto M = _p->createModule();

    Function *closure = cast<Function>(
                M->getOrInsertFunction(
                    formatCountedName("createInto_closure", closureCounter),
                    Type::getInt8PtrTy(*_p->Context),
                    Type::getInt8PtrTy(*_p->Context),
                    (Type *)0
                    )
                );

    BasicBlock *BB = BasicBlock::Create(*_p->Context, "EntryBlock", closure);

    IRBuilder<> builder(BB);

    assert(closure->arg_begin() != closure->arg_end());

    Argument *ArgX = closure->arg_begin();
    ArgX->setName("targetPtr");

    Type *voidPtrT = builder.getInt8PtrTy();
    Type *intPtrT = builder.getInt32Ty();

    auto createIntoWrapper = generateFunctionWrapper("createInto", M, builder.getVoidTy(), {voidPtrT});
    auto setIndexWrapper = generateFunctionWrapper("setIndex", M, builder.getVoidTy(), {voidPtrT, intPtrT});

    builder.CreateCall(
                createIntoWrapper,
                ArgX,
                "createInto"
                );

    Value *idx = ConstantInt::get(Type::getInt32Ty(*_p->Context), classIdx);
    builder.CreateCall2(
                setIndexWrapper,
                ArgX,
                idx,
                "setIndex"
                );


    builder.CreateRetVoid();


    auto EE = _p->createEngine(M);
    EE->addGlobalMapping(createIntoWrapper, ((void *)QQmlPrivate::createInto<DynamicQObject>));
    EE->addGlobalMapping(setIndexWrapper, ((void *)setIndexPtr));

    return (CreateIntoFuncPtr) EE->getPointerToFunction(closure);
}


StaticMetaCallFuncPtr LlvmApi::generateDynamicObjectStaticMetaCall(int classIdx)
{
    using namespace llvm;

    closureCounter++;

    auto M = _p->createModule();

    Function *closure = cast<Function>(
                M->getOrInsertFunction(
                    formatCountedName("static_metacall_closure", closureCounter),
                    Type::getVoidTy(*_p->Context),   // ret
                    Type::getInt8PtrTy(*_p->Context), // QObject *obj
                    Type::getInt32Ty(*_p->Context),   // QMetaObject::Call _c
                    Type::getInt32Ty(*_p->Context),   // int _id
                    Type::getInt8PtrTy(*_p->Context), // void **_a
                    (Type *)0
                    )
                );

    BasicBlock *BB = BasicBlock::Create(*_p->Context, "EntryBlock", closure);

    IRBuilder<> builder(BB);

    assert(closure->arg_size() == 4);

    auto arg_it = closure->arg_begin();
    Argument *Arg1 = arg_it++;
    Argument *Arg2 = arg_it++;
    Argument *Arg3 = arg_it++;
    Argument *Arg4 = arg_it++;

    assert (arg_it == closure->arg_end());

    Arg1->setName("obj");
    Arg2->setName("_c");
    Arg3->setName("_id");
    Arg4->setName("_a");

    auto staticMetacallWrapper = generateFunctionWrapper(
                "staticMetaCall",
                M,
                builder.getInt32Ty(),
                {
                    Type::getVoidTy(*_p->Context),   // ret
                    Type::getInt8PtrTy(*_p->Context), // QObject *obj
                    Type::getInt32Ty(*_p->Context),   // QMetaObject::Call _c
                    Type::getInt32Ty(*_p->Context),   // int _id
                    Type::getInt8PtrTy(*_p->Context), // void **_a
                }
                );

    Value *idx = ConstantInt::get(Type::getInt32Ty(*_p->Context), classIdx);
    builder.CreateCall5(
                staticMetacallWrapper,
                idx,
                Arg1,
                Arg2,
                Arg3,
                Arg4,
                "staticMetaCall"
                );

    builder.CreateRetVoid();


    auto EE = _p->createEngine(M);
    EE->addGlobalMapping(staticMetacallWrapper, ((void *)static_metacall));

    return (StaticMetaCallFuncPtr) EE->getPointerToFunction(closure);
}





LlvmApi llvmApi;

}

