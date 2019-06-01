
// Generated from Rule.g4 by ANTLR 4.7.1


#include "RuleLexer.h"


using namespace antlr4;


RuleLexer::RuleLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RuleLexer::~RuleLexer() {
  delete _interpreter;
}

std::string RuleLexer::getGrammarFileName() const {
  return "Rule.g4";
}

const std::vector<std::string>& RuleLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& RuleLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& RuleLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& RuleLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& RuleLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> RuleLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& RuleLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> RuleLexer::_decisionToDFA;
atn::PredictionContextCache RuleLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RuleLexer::_atn;
std::vector<uint16_t> RuleLexer::_serializedATN;

std::vector<std::string> RuleLexer::_ruleNames = {
  u8"OR", u8"AND", u8"IF", u8"IS", u8"THEN", u8"SEMI", u8"ID", u8"LETRA", 
  u8"WS", u8"COMMENT"
};

std::vector<std::string> RuleLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> RuleLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> RuleLexer::_literalNames = {
  "", u8"'o'", u8"'y'", u8"'si'", u8"'es'", u8"'entonces'", u8"';'"
};

std::vector<std::string> RuleLexer::_symbolicNames = {
  "", u8"OR", u8"AND", u8"IF", u8"IS", u8"THEN", u8"SEMI", u8"ID", u8"WS", 
  u8"COMMENT"
};

dfa::Vocabulary RuleLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RuleLexer::_tokenNames;

RuleLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0xb, 0x48, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x6, 0x8, 0x2e, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 
    0x2f, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x6, 0xa, 0x35, 0xa, 0xa, 0xd, 0xa, 
    0xe, 0xa, 0x36, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x3f, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x42, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0x40, 0x2, 0xc, 0x3, 
    0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 
    0x2, 0x13, 0xa, 0x15, 0xb, 0x3, 0x2, 0x4, 0x4, 0x2, 0x43, 0x5c, 0x63, 
    0x7c, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x2, 0x49, 0x2, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x3, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x5, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x9, 0x1e, 0x3, 0x2, 0x2, 0x2, 0xb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x11, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x34, 0x3, 0x2, 0x2, 0x2, 0x15, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x18, 0x7, 0x71, 0x2, 0x2, 0x18, 0x4, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x1a, 0x7, 0x7b, 0x2, 0x2, 0x1a, 0x6, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x1c, 0x7, 0x75, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x6b, 0x2, 0x2, 0x1d, 
    0x8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x67, 0x2, 0x2, 0x1f, 0x20, 
    0x7, 0x75, 0x2, 0x2, 0x20, 0xa, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 
    0x67, 0x2, 0x2, 0x22, 0x23, 0x7, 0x70, 0x2, 0x2, 0x23, 0x24, 0x7, 0x76, 
    0x2, 0x2, 0x24, 0x25, 0x7, 0x71, 0x2, 0x2, 0x25, 0x26, 0x7, 0x70, 0x2, 
    0x2, 0x26, 0x27, 0x7, 0x65, 0x2, 0x2, 0x27, 0x28, 0x7, 0x67, 0x2, 0x2, 
    0x28, 0x29, 0x7, 0x75, 0x2, 0x2, 0x29, 0xc, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x2b, 0x7, 0x3d, 0x2, 0x2, 0x2b, 0xe, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 
    0x5, 0x11, 0x9, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x10, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x9, 0x2, 0x2, 
    0x2, 0x32, 0x12, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x9, 0x3, 0x2, 0x2, 
    0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x8, 0xa, 0x2, 0x2, 0x39, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x31, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x2c, 
    0x2, 0x2, 0x3c, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0xb, 0x2, 0x2, 
    0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x7, 0x2c, 0x2, 0x2, 0x44, 0x45, 0x7, 0x31, 0x2, 0x2, 0x45, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x47, 0x8, 0xb, 0x2, 0x2, 0x47, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x2, 0x2f, 0x36, 0x40, 0x3, 0x8, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RuleLexer::Initializer RuleLexer::_init;