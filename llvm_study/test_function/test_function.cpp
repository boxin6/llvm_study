#include "llvm/IR/LLVMContext.h" //公共的数据结构
#include "llvm/IR/Module.h"     //一个源文件的抽象
#include "llvm/IR/IRBuilder.h"  //一个源文件的抽象{全局变量，函数（基本块组成）}
#include "llvm/IR/Verifier.h"   //校验模块，校验函数
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/GlobalValue.h>
#include <vector>
using namespace llvm;

/*int max(int a,int b )
{
   int c;
    if(a>b)
        c=a;
    else
        c=b;
    return c;
}*/
int main()
{
    auto llvmContext=std::make_unique<LLVMContext>();
    auto module = std::make_unique<Module>("function",*llvmContext);
    auto irBuilder = std::make_unique<IRBuilder<>>(*llvmContext);

    Type *inttype = irBuilder->getInt32Ty();
    auto fType = FunctionType::get(inttype,{inttype,inttype},false);
    Function *func = Function::Create(fType,GlobalValue::ExternalLinkage,"max",*module);

    std::vector<std::string> param{"a","b"};
    int idx=0;
    for(Function::arg_iterator it = func->arg_begin();it!= func->arg_end();++it,++idx)
    {
        it->setName(param[idx]);
    }
    BasicBlock *_entry = BasicBlock::Create(*llvmContext,"entry",func);
    BasicBlock *_then = BasicBlock::Create(*llvmContext,"",func);
    BasicBlock *_else = BasicBlock::Create(*llvmContext,"",func);
    BasicBlock *_merge = BasicBlock::Create(*llvmContext,"",func);

    irBuilder->SetInsertPoint((_entry));
    Value *c = irBuilder->CreateAlloca(irBuilder->getInt32Ty(),nullptr,"c");
    Value *cmp_ret = irBuilder->CreateICmpSGT(func->getArg(0),func->getArg(1));
    irBuilder->CreateCondBr(cmp_ret,_then,_else);


    irBuilder->SetInsertPoint(_then);
    irBuilder->CreateStore(func->getArg(0),c);
    irBuilder->CreateBr(_merge);

    irBuilder->SetInsertPoint(_else);
    irBuilder->CreateStore(func->getArg(1),c);
    irBuilder->CreateBr(_merge);

    irBuilder->SetInsertPoint(_merge);
    Value *c_val = irBuilder->CreateLoad(irBuilder->getInt32Ty(),c);
    irBuilder->CreateRet(c_val);

    verifyFunction(*func);
    module->print(errs(),nullptr);
    return 0;
}