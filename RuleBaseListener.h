
// Generated from Rule.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "RuleListener.h"


/**
 * This class provides an empty implementation of RuleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RuleBaseListener : public RuleListener {
public:

  virtual void enterKnowledge_base(RuleParser::Knowledge_baseContext * /*ctx*/) override { }
  virtual void exitKnowledge_base(RuleParser::Knowledge_baseContext * /*ctx*/) override { }

  virtual void enterRules(RuleParser::RulesContext * /*ctx*/) override { }
  virtual void exitRules(RuleParser::RulesContext * /*ctx*/) override { }

  virtual void enterAntecedent(RuleParser::AntecedentContext * /*ctx*/) override { }
  virtual void exitAntecedent(RuleParser::AntecedentContext * /*ctx*/) override { }

  virtual void enterConsequent(RuleParser::ConsequentContext * /*ctx*/) override { }
  virtual void exitConsequent(RuleParser::ConsequentContext * /*ctx*/) override { }

  virtual void enterPremise(RuleParser::PremiseContext * /*ctx*/) override { }
  virtual void exitPremise(RuleParser::PremiseContext * /*ctx*/) override { }

  virtual void enterVariable(RuleParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(RuleParser::VariableContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

