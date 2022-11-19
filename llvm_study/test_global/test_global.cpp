#include "llvm/IR/LLVMContext.h" //公共的数据结构
#include "llvm/IR/Module.h"     //一个源文件的抽象
#include "llvm/IR/IRBuilder.h"  //一个源文件的抽象{全局变量，函数（基本块组成）}
#include "llvm/IR/Verifier.h"   //校验模块，校验函数
#include <llvm/IR/Constant.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/GlobalVariable.h>

using namespace llvm;

int main()
{
    auto llvmContext =std::make_unique<LLVMContext>();
    auto module = std::make_unique<Module>("ir_global",*llvmContext);
    auto irBuilder = std::make_unique<IRBuilder<>>(*llvmContext);

    //int b=66;
    //const int b=66
    module->getOrInsertGlobal("b",irBuilder->getInt32Ty());
    GlobalVariable *b=module->getNamedGlobal("b");
    b->setConstant(true);
    b->setInitializer(irBuilder->getInt32(66));

    //int *p=&b;
    GlobalVariable *p =static_cast<GlobalVariable *>(module->getOrInsertGlobal("p",PointerType::getInt32PtrTy(*llvmContext)));
    p->setInitializer(b);

    //double a[2]={1.1,2,2}
    ArrayType *arrayType=ArrayType::get(irBuilder->getDoubleTy(),2);
    module->getOrInsertGlobal("a",arrayType);
    GlobalVariable *a=module->getNamedGlobal("a");
    a->setInitializer(ConstantArray::get(arrayType,{
        ConstantFP::get(irBuilder->getDoubleTy(),1.1),
        ConstantFP::get(irBuilder->getDoubleTy(),2.2)
    }));

    //struct node{int a,float b,double c,int *p};
    StructType *structType = StructType::create(*llvmContext,"node");
    structType->setBody({
        irBuilder->getInt32Ty(),
        irBuilder->getFloatTy(),
        irBuilder->getDoubleTy(),
        PointerType::getInt32PtrTy(*llvmContext)
    });

    //a=1,b=1.1,c=2.2,p=NULL
    module->getOrInsertGlobal("node",structType);
    GlobalVariable *s=module->getNamedGlobal("node");
    s->setInitializer(ConstantStruct::get(structType,{
        irBuilder->getInt32(1),
        ConstantFP::get(irBuilder->getFloatTy(),1.1),
        ConstantFP::get(irBuilder->getFloatTy(),2.2),
        ConstantPointerNull::get(PointerType::getInt32PtrTy(*llvmContext))}));

    //double *dp[2]={}
    ArrayType *pointarrayType=ArrayType::get(PointerType::getInt32PtrTy(*llvmContext),2);
    module->getOrInsertGlobal("dp",pointarrayType);
    GlobalVariable *dp=module->getNamedGlobal("dp");
    dp->setInitializer(ConstantArray::get(pointarrayType,{
        ConstantPointerNull::get(PointerType::getInt32PtrTy(*llvmContext)),
        ConstantPointerNull::get(PointerType::getInt32PtrTy(*llvmContext))
    }));

    //double *fp=dp;
    module->getOrInsertGlobal("fp",pointarrayType);
    GlobalVariable *fp=module->getNamedGlobal("fp");
    fp=dp;

    module->print(errs(),nullptr);
    return 0;
}