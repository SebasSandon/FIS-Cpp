
// Generated from Rule.g4 by ANTLR 4.7.1


#include "RuleListener.h"

#include "RuleParser.h"


using namespace antlrcpp;
using namespace antlr4;

RuleParser::RuleParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RuleParser::~RuleParser() {
  delete _interpreter;
}

std::string RuleParser::getGrammarFileName() const {
  return "Rule.g4";
}

const std::vector<std::string>& RuleParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& RuleParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Knowledge_baseContext ------------------------------------------------------------------

RuleParser::Knowledge_baseContext::Knowledge_baseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RuleParser::RulesContext *> RuleParser::Knowledge_baseContext::rules() {
  return getRuleContexts<RuleParser::RulesContext>();
}

RuleParser::RulesContext* RuleParser::Knowledge_baseContext::rules(size_t i) {
  return getRuleContext<RuleParser::RulesContext>(i);
}


size_t RuleParser::Knowledge_baseContext::getRuleIndex() const {
  return RuleParser::RuleKnowledge_base;
}

void RuleParser::Knowledge_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKnowledge_base(this);
}

void RuleParser::Knowledge_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKnowledge_base(this);
}

RuleParser::Knowledge_baseContext* RuleParser::knowledge_base() {
  Knowledge_baseContext *_localctx = _tracker.createInstance<Knowledge_baseContext>(_ctx, getState());
  enterRule(_localctx, 0, RuleParser::RuleKnowledge_base);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RuleParser::IF) {
      setState(12);
      rules();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulesContext ------------------------------------------------------------------

RuleParser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RuleParser::AntecedentContext* RuleParser::RulesContext::antecedent() {
  return getRuleContext<RuleParser::AntecedentContext>(0);
}

RuleParser::ConsequentContext* RuleParser::RulesContext::consequent() {
  return getRuleContext<RuleParser::ConsequentContext>(0);
}

tree::TerminalNode* RuleParser::RulesContext::SEMI() {
  return getToken(RuleParser::SEMI, 0);
}


size_t RuleParser::RulesContext::getRuleIndex() const {
  return RuleParser::RuleRules;
}

void RuleParser::RulesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRules(this);
}

void RuleParser::RulesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRules(this);
}

RuleParser::RulesContext* RuleParser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 2, RuleParser::RuleRules);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    antecedent();
    setState(19);
    consequent();
    setState(20);
    match(RuleParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AntecedentContext ------------------------------------------------------------------

RuleParser::AntecedentContext::AntecedentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RuleParser::AntecedentContext::IF() {
  return getToken(RuleParser::IF, 0);
}

std::vector<RuleParser::PremiseContext *> RuleParser::AntecedentContext::premise() {
  return getRuleContexts<RuleParser::PremiseContext>();
}

RuleParser::PremiseContext* RuleParser::AntecedentContext::premise(size_t i) {
  return getRuleContext<RuleParser::PremiseContext>(i);
}

std::vector<tree::TerminalNode *> RuleParser::AntecedentContext::AND() {
  return getTokens(RuleParser::AND);
}

tree::TerminalNode* RuleParser::AntecedentContext::AND(size_t i) {
  return getToken(RuleParser::AND, i);
}

std::vector<tree::TerminalNode *> RuleParser::AntecedentContext::OR() {
  return getTokens(RuleParser::OR);
}

tree::TerminalNode* RuleParser::AntecedentContext::OR(size_t i) {
  return getToken(RuleParser::OR, i);
}


size_t RuleParser::AntecedentContext::getRuleIndex() const {
  return RuleParser::RuleAntecedent;
}

void RuleParser::AntecedentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAntecedent(this);
}

void RuleParser::AntecedentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAntecedent(this);
}

RuleParser::AntecedentContext* RuleParser::antecedent() {
  AntecedentContext *_localctx = _tracker.createInstance<AntecedentContext>(_ctx, getState());
  enterRule(_localctx, 4, RuleParser::RuleAntecedent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(RuleParser::IF);
    setState(23);
    premise();
    setState(30);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RuleParser::OR

    || _la == RuleParser::AND) {
      setState(28);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RuleParser::AND: {
          setState(24);
          match(RuleParser::AND);
          setState(25);
          premise();
          break;
        }

        case RuleParser::OR: {
          setState(26);
          match(RuleParser::OR);
          setState(27);
          premise();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsequentContext ------------------------------------------------------------------

RuleParser::ConsequentContext::ConsequentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RuleParser::ConsequentContext::THEN() {
  return getToken(RuleParser::THEN, 0);
}

RuleParser::PremiseContext* RuleParser::ConsequentContext::premise() {
  return getRuleContext<RuleParser::PremiseContext>(0);
}


size_t RuleParser::ConsequentContext::getRuleIndex() const {
  return RuleParser::RuleConsequent;
}

void RuleParser::ConsequentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsequent(this);
}

void RuleParser::ConsequentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsequent(this);
}

RuleParser::ConsequentContext* RuleParser::consequent() {
  ConsequentContext *_localctx = _tracker.createInstance<ConsequentContext>(_ctx, getState());
  enterRule(_localctx, 6, RuleParser::RuleConsequent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(RuleParser::THEN);
    setState(34);
    premise();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PremiseContext ------------------------------------------------------------------

RuleParser::PremiseContext::PremiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RuleParser::PremiseContext::IS() {
  return getToken(RuleParser::IS, 0);
}

std::vector<RuleParser::VariableContext *> RuleParser::PremiseContext::variable() {
  return getRuleContexts<RuleParser::VariableContext>();
}

RuleParser::VariableContext* RuleParser::PremiseContext::variable(size_t i) {
  return getRuleContext<RuleParser::VariableContext>(i);
}


size_t RuleParser::PremiseContext::getRuleIndex() const {
  return RuleParser::RulePremise;
}

void RuleParser::PremiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPremise(this);
}

void RuleParser::PremiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPremise(this);
}

RuleParser::PremiseContext* RuleParser::premise() {
  PremiseContext *_localctx = _tracker.createInstance<PremiseContext>(_ctx, getState());
  enterRule(_localctx, 8, RuleParser::RulePremise);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    dynamic_cast<PremiseContext *>(_localctx)->var = variable();
    setState(37);
    match(RuleParser::IS);
    setState(38);
    dynamic_cast<PremiseContext *>(_localctx)->val = variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

RuleParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RuleParser::VariableContext::ID() {
  return getToken(RuleParser::ID, 0);
}


size_t RuleParser::VariableContext::getRuleIndex() const {
  return RuleParser::RuleVariable;
}

void RuleParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void RuleParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RuleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

RuleParser::VariableContext* RuleParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 10, RuleParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(RuleParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> RuleParser::_decisionToDFA;
atn::PredictionContextCache RuleParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RuleParser::_atn;
std::vector<uint16_t> RuleParser::_serializedATN;

std::vector<std::string> RuleParser::_ruleNames = {
  "knowledge_base", "rules", "antecedent", "consequent", "premise", "variable"
};

std::vector<std::string> RuleParser::_literalNames = {
  "", "'o'", "'y'", "'si'", "'es'", "'entonces'", "';'"
};

std::vector<std::string> RuleParser::_symbolicNames = {
  "", "OR", "AND", "IF", "IS", "THEN", "SEMI", "ID", "WS", "COMMENT"
};

dfa::Vocabulary RuleParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RuleParser::_tokenNames;

RuleParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb, 0x2d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x1f, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x22, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0x2, 0x2, 0x2, 0x29, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x18, 0x3, 0x2, 0x2, 0x2, 0x8, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x26, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x10, 0x5, 0x4, 0x3, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 0x5, 
    0x8, 0x5, 0x2, 0x16, 0x17, 0x7, 0x8, 0x2, 0x2, 0x17, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x19, 0x7, 0x5, 0x2, 0x2, 0x19, 0x20, 0x5, 0xa, 0x6, 
    0x2, 0x1a, 0x1b, 0x7, 0x4, 0x2, 0x2, 0x1b, 0x1f, 0x5, 0xa, 0x6, 0x2, 
    0x1c, 0x1d, 0x7, 0x3, 0x2, 0x2, 0x1d, 0x1f, 0x5, 0xa, 0x6, 0x2, 0x1e, 
    0x1a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x7, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x24, 0x7, 0x7, 0x2, 0x2, 0x24, 0x25, 0x5, 0xa, 0x6, 
    0x2, 0x25, 0x9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0xc, 0x7, 0x2, 
    0x27, 0x28, 0x7, 0x6, 0x2, 0x2, 0x28, 0x29, 0x5, 0xc, 0x7, 0x2, 0x29, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x9, 0x2, 0x2, 0x2b, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x11, 0x1e, 0x20, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RuleParser::Initializer RuleParser::_init;
