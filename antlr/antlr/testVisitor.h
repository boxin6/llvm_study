
// Generated from test.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "testParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by testParser.
 */
class  testVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by testParser.
   */
    virtual antlrcpp::Any visitCompunit(testParser::CompunitContext *context) = 0;

    virtual antlrcpp::Any visitFuncdef(testParser::FuncdefContext *context) = 0;

    virtual antlrcpp::Any visitFunctype(testParser::FunctypeContext *context) = 0;

    virtual antlrcpp::Any visitBlock(testParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStmt(testParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitNumber(testParser::NumberContext *context) = 0;


};

