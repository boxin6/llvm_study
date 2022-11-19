
// Generated from test.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "testListener.h"


/**
 * This class provides an empty implementation of testListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  testBaseListener : public testListener {
public:

  virtual void enterCompunit(testParser::CompunitContext * /*ctx*/) override { }
  virtual void exitCompunit(testParser::CompunitContext * /*ctx*/) override { }

  virtual void enterFuncdef(testParser::FuncdefContext * /*ctx*/) override { }
  virtual void exitFuncdef(testParser::FuncdefContext * /*ctx*/) override { }

  virtual void enterFunctype(testParser::FunctypeContext * /*ctx*/) override { }
  virtual void exitFunctype(testParser::FunctypeContext * /*ctx*/) override { }

  virtual void enterBlock(testParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(testParser::BlockContext * /*ctx*/) override { }

  virtual void enterStmt(testParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(testParser::StmtContext * /*ctx*/) override { }

  virtual void enterNumber(testParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(testParser::NumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

