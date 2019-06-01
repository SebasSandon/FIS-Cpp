#ifndef TREESHAPELISTENER_H
#define TREESHAPELISTENER_H

#include "RuleBaseListener.h"
#include <iostream>

class TreeShapeListener : public RuleBaseListener
{
    public:
        TreeShapeListener();
        virtual ~TreeShapeListener();
        virtual void exitPremise(RuleParser::PremiseContext *ctx) override;

    protected:

    private:
};

#endif // TREESHAPELISTENER_H
