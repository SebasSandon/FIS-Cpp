#include <iostream>
#include "LinguisticValue.h"
#include "LinguisticVariable.h"
#include "antlr4-runtime.h"
#include "RuleBaseListener.h"
#include "RuleLexer.h"
#include "RuleParser.h"
#include "TreeShapeListener.h"

using namespace antlr4;
using namespace std;

int main()
{
    double inputValue = 14;
    double inputValue2= 3;

    LinguisticValue *bajo = new LinguisticValue(inputValue2,"Bajo");
    LinguisticValue *medio = new LinguisticValue(inputValue,"Medio");
    LinguisticValue *alto = new LinguisticValue(inputValue,"Alto");

    bajo->Triangle(1,5,9);
    medio->Trapezoid(5,9,13,17);
    alto->Gamma(13,17);

    LinguisticVariable *Estatura = new LinguisticVariable();
    Estatura->addLinguisticValue(bajo);
    Estatura->addLinguisticValue(medio);
    Estatura->addLinguisticValue(alto);

    int resultVector;
    resultVector = Estatura->getCountValues();

    cout << "Size vector: " << resultVector << endl;

    double resultMF = 0;

    resultMF = bajo->getMembershipValue();
    cout << "Result for " << bajo->getNameOfValue() << ": " << resultMF << endl;

    resultMF = medio->getMembershipValue();
    cout << "Result for " << medio->getNameOfValue() << ": " << resultMF << endl;

    resultMF = alto->getMembershipValue();
    cout << "Result for " << alto->getNameOfValue() << ": " << resultMF << endl;



    ANTLRFileStream input("reglas.smp");
    RuleLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        cout << token->toString() << endl;
    }

    RuleParser parser(&tokens);

    tree::ParseTree *tree = parser.knowledge_base();
    TreeShapeListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    cout << tree->toStringTree(&parser) << endl;


    return 0;
}
