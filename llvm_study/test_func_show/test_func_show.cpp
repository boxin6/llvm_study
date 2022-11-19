#include "llvm/IR/LLVMContext.h" //公共的数据结构
#include "llvm/IR/Module.h"     //一个源文件的抽象
#include "llvm/IR/IRBuilder.h"  //一个源文件的抽象{全局变量，函数（基本块组成）}
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/Support/TargetSelect.h"
#include <llvm-c/ExecutionEngine.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/GlobalValue.h>
#include <iostream>


using namespace llvm;

int fib(int n)
{
    if(n<=1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    auto llvmContext = std::make_unique<LLVMContext>();
    //std::unique_ptr<LLVMContext>
    auto module = std::make_unique<Module>("fib",*llvmContext);
    auto irBuilder = std::make_unique<IRBuilder<>>(*llvmContext);

    Type *intType = irBuilder->getInt32Ty();
    FunctionType *type = FunctionType::get(intType,{intType},false);
    Function *function =  Function::Create(type,GlobalValue::ExternalLinkage,"fib",*module);
    BasicBlock *entryBB = BasicBlock::Create(*llvmContext,"entry",function);
    BasicBlock *trueBB = BasicBlock::Create(*llvmContext,"",function);
    BasicBlock *falseBB = BasicBlock::Create(*llvmContext,"",function);
    irBuilder->SetInsertPoint(entryBB);
    Value *c = irBuilder->CreateICmpSLE(function->getArg(0), irBuilder->getInt32(1));
    irBuilder->CreateCondBr(c,trueBB,falseBB);

    irBuilder->SetInsertPoint(trueBB);
    irBuilder->CreateRet(irBuilder->getInt32(1));

    irBuilder->SetInsertPoint(falseBB);

    Value *v1 = irBuilder->CreateNSWSub (function->getArg(0),irBuilder->getInt32(1));
    Value *f1 = irBuilder->CreateCall(function,{v1});
    
    Value *v2 = irBuilder->CreateNSWSub (function->getArg(0),irBuilder->getInt32(2));
    Value *f2 = irBuilder->CreateCall(function,{v1});

    Value * sum = irBuilder->CreateNSWAdd(f1, f2);
    irBuilder->CreateRet(sum);
    module->print(errs(),nullptr);

    
    return 0;
}