
// Generated from Rule.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  RuleParser : public antlr4::Parser {
public:
  enum {
    OR = 1, AND = 2, IF = 3, IS = 4, THEN = 5, SEMI = 6, ID = 7, WS = 8, 
    COMMENT = 9
  };

  enum {
    RuleKnowledge_base = 0, RuleRules = 1, RuleAntecedent = 2, RuleConsequent = 3, 
    RulePremise = 4, RuleVariable = 5
  };

  RuleParser(antlr4::TokenStream *input);
  ~RuleParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Knowledge_baseContext;
  class RulesContext;
  class AntecedentContext;
  class ConsequentContext;
  class PremiseContext;
  class VariableContext; 

  class  Knowledge_baseContext : public antlr4::ParserRuleContext {
  public:
    Knowledge_baseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RulesContext *> rules();
    RulesContext* rules(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Knowledge_baseContext* knowledge_base();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AntecedentContext *antecedent();
    ConsequentContext *consequent();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RulesContext* rules();

  class  AntecedentContext : public antlr4::ParserRuleContext {
  public:
    AntecedentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<PremiseContext *> premise();
    PremiseContext* premise(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AntecedentContext* antecedent();

  class  ConsequentContext : public antlr4::ParserRuleContext {
  public:
    ConsequentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN();
    PremiseContext *premise();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsequentContext* consequent();

  class  PremiseContext : public antlr4::ParserRuleContext {
  public:
    RuleParser::VariableContext *var = nullptr;;
    RuleParser::VariableContext *val = nullptr;;
    PremiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PremiseContext* premise();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

