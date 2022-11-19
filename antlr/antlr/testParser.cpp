
// Generated from test.g4 by ANTLR 4.9.3


#include "testListener.h"
#include "testVisitor.h"

#include "testParser.h"


using namespace antlrcpp;
using namespace antlr4;

testParser::testParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

testParser::~testParser() {
  delete _interpreter;
}

std::string testParser::getGrammarFileName() const {
  return "test.g4";
}

const std::vector<std::string>& testParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& testParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompunitContext ------------------------------------------------------------------

testParser::CompunitContext::CompunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

testParser::FuncdefContext* testParser::CompunitContext::funcdef() {
  return getRuleContext<testParser::FuncdefContext>(0);
}


size_t testParser::CompunitContext::getRuleIndex() const {
  return testParser::RuleCompunit;
}

void testParser::CompunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompunit(this);
}

void testParser::CompunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompunit(this);
}


antlrcpp::Any testParser::CompunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitCompunit(this);
  else
    return visitor->visitChildren(this);
}

testParser::CompunitContext* testParser::compunit() {
  CompunitContext *_localctx = _tracker.createInstance<CompunitContext>(_ctx, getState());
  enterRule(_localctx, 0, testParser::RuleCompunit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    funcdef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

testParser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

testParser::FunctypeContext* testParser::FuncdefContext::functype() {
  return getRuleContext<testParser::FunctypeContext>(0);
}

tree::TerminalNode* testParser::FuncdefContext::IDENT() {
  return getToken(testParser::IDENT, 0);
}

testParser::BlockContext* testParser::FuncdefContext::block() {
  return getRuleContext<testParser::BlockContext>(0);
}


size_t testParser::FuncdefContext::getRuleIndex() const {
  return testParser::RuleFuncdef;
}

void testParser::FuncdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdef(this);
}

void testParser::FuncdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdef(this);
}


antlrcpp::Any testParser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

testParser::FuncdefContext* testParser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 2, testParser::RuleFuncdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    functype();
    setState(15);
    match(testParser::IDENT);
    setState(16);
    match(testParser::T__0);
    setState(17);
    match(testParser::T__1);
    setState(18);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctypeContext ------------------------------------------------------------------

testParser::FunctypeContext::FunctypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t testParser::FunctypeContext::getRuleIndex() const {
  return testParser::RuleFunctype;
}

void testParser::FunctypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctype(this);
}

void testParser::FunctypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctype(this);
}


antlrcpp::Any testParser::FunctypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitFunctype(this);
  else
    return visitor->visitChildren(this);
}

testParser::FunctypeContext* testParser::functype() {
  FunctypeContext *_localctx = _tracker.createInstance<FunctypeContext>(_ctx, getState());
  enterRule(_localctx, 4, testParser::RuleFunctype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(testParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

testParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

testParser::StmtContext* testParser::BlockContext::stmt() {
  return getRuleContext<testParser::StmtContext>(0);
}


size_t testParser::BlockContext::getRuleIndex() const {
  return testParser::RuleBlock;
}

void testParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void testParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any testParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

testParser::BlockContext* testParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, testParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(testParser::T__3);
    setState(23);
    stmt();
    setState(24);
    match(testParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

testParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

testParser::NumberContext* testParser::StmtContext::number() {
  return getRuleContext<testParser::NumberContext>(0);
}


size_t testParser::StmtContext::getRuleIndex() const {
  return testParser::RuleStmt;
}

void testParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void testParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any testParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

testParser::StmtContext* testParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 8, testParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(testParser::T__5);
    setState(27);
    number();
    setState(28);
    match(testParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

testParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* testParser::NumberContext::INT_CONST() {
  return getToken(testParser::INT_CONST, 0);
}


size_t testParser::NumberContext::getRuleIndex() const {
  return testParser::RuleNumber;
}

void testParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void testParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<testListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any testParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<testVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

testParser::NumberContext* testParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 10, testParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(testParser::INT_CONST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> testParser::_decisionToDFA;
atn::PredictionContextCache testParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN testParser::_atn;
std::vector<uint16_t> testParser::_serializedATN;

std::vector<std::string> testParser::_ruleNames = {
  "compunit", "funcdef", "functype", "block", "stmt", "number"
};

std::vector<std::string> testParser::_literalNames = {
  "", "'('", "')'", "'int'", "'{'", "'}'", "'return'", "';'"
};

std::vector<std::string> testParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "IDENT", "INT_CONST", "W"
};

dfa::Vocabulary testParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> testParser::_tokenNames;

testParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xc, 0x23, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0x2, 0x2, 0x2, 0x1c, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 0x4, 0x10, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x16, 0x3, 0x2, 0x2, 0x2, 0x8, 0x18, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x1c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x20, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0xf, 0x5, 0x4, 0x3, 0x2, 0xf, 0x3, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0x11, 0x5, 0x6, 0x4, 0x2, 0x11, 0x12, 0x7, 0xa, 0x2, 0x2, 0x12, 
       0x13, 0x7, 0x3, 0x2, 0x2, 0x13, 0x14, 0x7, 0x4, 0x2, 0x2, 0x14, 0x15, 
       0x5, 0x8, 0x5, 0x2, 0x15, 0x5, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
       0x5, 0x2, 0x2, 0x17, 0x7, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x7, 0x6, 
       0x2, 0x2, 0x19, 0x1a, 0x5, 0xa, 0x6, 0x2, 0x1a, 0x1b, 0x7, 0x7, 0x2, 
       0x2, 0x1b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x8, 0x2, 0x2, 
       0x1d, 0x1e, 0x5, 0xc, 0x7, 0x2, 0x1e, 0x1f, 0x7, 0x9, 0x2, 0x2, 0x1f, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x7, 0xb, 0x2, 0x2, 0x21, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

testParser::Initializer testParser::_init;
