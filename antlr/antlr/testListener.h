
// Generated from test.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "testParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by testParser.
 */
class  testListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompunit(testParser::CompunitContext *ctx) = 0;
  virtual void exitCompunit(testParser::CompunitContext *ctx) = 0;

  virtual void enterFuncdef(testParser::FuncdefContext *ctx) = 0;
  virtual void exitFuncdef(testParser::FuncdefContext *ctx) = 0;

  virtual void enterFunctype(testParser::FunctypeContext *ctx) = 0;
  virtual void exitFunctype(testParser::FunctypeContext *ctx) = 0;

  virtual void enterBlock(testParser::BlockContext *ctx) = 0;
  virtual void exitBlock(testParser::BlockContext *ctx) = 0;

  virtual void enterStmt(testParser::StmtContext *ctx) = 0;
  virtual void exitStmt(testParser::StmtContext *ctx) = 0;

  virtual void enterNumber(testParser::NumberContext *ctx) = 0;
  virtual void exitNumber(testParser::NumberContext *ctx) = 0;


};

