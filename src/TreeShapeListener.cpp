#include "TreeShapeListener.h"

TreeShapeListener::TreeShapeListener()
{
    //ctor
}

TreeShapeListener::~TreeShapeListener()
{
    //dtor
}


void TreeShapeListener::exitPremise(RuleParser::PremiseContext *ctx)
{
    // Do something when entering the key rule.
	std::cout << "Var: "<< ctx->var->getText() << std::endl;
	std::cout << "Val: "<< ctx->val->getText() << std::endl;
}
