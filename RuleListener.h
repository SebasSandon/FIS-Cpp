
// Generated from Rule.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "RuleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RuleParser.
 */
class  RuleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKnowledge_base(RuleParser::Knowledge_baseContext *ctx) = 0;
  virtual void exitKnowledge_base(RuleParser::Knowledge_baseContext *ctx) = 0;

  virtual void enterRules(RuleParser::RulesContext *ctx) = 0;
  virtual void exitRules(RuleParser::RulesContext *ctx) = 0;

  virtual void enterAntecedent(RuleParser::AntecedentContext *ctx) = 0;
  virtual void exitAntecedent(RuleParser::AntecedentContext *ctx) = 0;

  virtual void enterConsequent(RuleParser::ConsequentContext *ctx) = 0;
  virtual void exitConsequent(RuleParser::ConsequentContext *ctx) = 0;

  virtual void enterPremise(RuleParser::PremiseContext *ctx) = 0;
  virtual void exitPremise(RuleParser::PremiseContext *ctx) = 0;

  virtual void enterVariable(RuleParser::VariableContext *ctx) = 0;
  virtual void exitVariable(RuleParser::VariableContext *ctx) = 0;


};

