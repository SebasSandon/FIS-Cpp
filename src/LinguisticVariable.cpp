#include "LinguisticVariable.h"
#include <vector>

using namespace std;

LinguisticVariable::LinguisticVariable()
{
    //ctor
}

void LinguisticVariable::addLinguisticValue(LinguisticValue *lv)
{
    linguisticsValues.push_back(lv);
}

int LinguisticVariable::getCountValues()
{
    return linguisticsValues.size();
}

LinguisticVariable::~LinguisticVariable()
{
    //dtor
}
