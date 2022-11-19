#include "llvm/IR/LLVMContext.h" //公共的数据结构
#include "llvm/IR/Module.h"     //一个源文件的抽象
#include "llvm/IR/IRBuilder.h"  //一个源文件的抽象{全局变量，函数（基本块组成）}
#include "llvm/IR/Verifier.h"   //校验模块，校验函数
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/GlobalValue.h>

using namespace llvm;

/*int sum(int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=i;
    }
    return s;
}*/
int main()
{
    auto llvmContext=std::make_unique<LLVMContext>();
    auto module = std::make_unique<Module>("function",*llvmContext);
    auto irBuilder = std::make_unique<IRBuilder<>>(*llvmContext);

    Type *intType = irBuilder->getInt32Ty();
    auto ftype = FunctionType::get(intType,{intType},false);
    auto sumFuc = Function::Create(ftype,GlobalValue::ExternalLinkage,"sum",*module);
    BasicBlock *_entry = BasicBlock::Create(*llvmContext,"entry",sumFuc);
    BasicBlock *_loop = BasicBlock::Create(*llvmContext,"",sumFuc);
    BasicBlock *_loopBB = BasicBlock::Create(*llvmContext,"",sumFuc);
    BasicBlock *_loopadd = BasicBlock::Create(*llvmContext,"",sumFuc);
    BasicBlock *_exit = BasicBlock::Create(*llvmContext,"",sumFuc);

    irBuilder->SetInsertPoint(_entry);
    Value *n = irBuilder->CreateAlloca(intType,nullptr);
    Value *s = irBuilder->CreateAlloca(intType,nullptr);
    Value *i = irBuilder->CreateAlloca(intType,nullptr);
    irBuilder->CreateStore(sumFuc->getArg(0), n);
    irBuilder->CreateStore(irBuilder->getInt32(0), s);
    irBuilder->CreateStore(irBuilder->getInt32(0), i);
    irBuilder->CreateBr(_loop);

    irBuilder->SetInsertPoint(_loop);
    Value *i_val = irBuilder->CreateLoad(intType,i);
    Value *n_val = irBuilder->CreateLoad(intType,n);
    Value *cmp_val = irBuilder->CreateICmpSLT(i_val, n_val);
    irBuilder->CreateCondBr(cmp_val,_loopBB,_exit);

    irBuilder->SetInsertPoint(_loopBB);
    Value *s_val = irBuilder->CreateLoad(intType,s);
    i_val = irBuilder->CreateLoad(intType,i);
    Value *s_val_t = irBuilder->CreateNSWAdd(s_val, i_val);
    irBuilder->CreateStore(s_val_t, s);
    irBuilder->CreateBr(_loopadd);

    irBuilder->SetInsertPoint(_loopadd);
    i_val = irBuilder->CreateLoad(intType,i);
    Value *i_val_t = irBuilder->CreateNSWAdd( i_val,irBuilder->getInt32(1));
    irBuilder->CreateStore(i_val_t, i);
    irBuilder->CreateBr(_loop);

    irBuilder->SetInsertPoint(_exit);
    s_val = irBuilder->CreateLoad(intType,s);
    irBuilder->CreateRet(s_val);

    module->print(errs(),nullptr);
    return 0;
}