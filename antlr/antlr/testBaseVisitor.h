
// Generated from test.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "testVisitor.h"


/**
 * This class provides an empty implementation of testVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  testBaseVisitor : public testVisitor {
public:

  virtual antlrcpp::Any visitCompunit(testParser::CompunitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncdef(testParser::FuncdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctype(testParser::FunctypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(testParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(testParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(testParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

