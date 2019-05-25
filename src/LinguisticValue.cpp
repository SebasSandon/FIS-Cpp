#include "LinguisticValue.h"

#include <string>
using std::string;

LinguisticValue::LinguisticValue(double x,const string &name) : MembershipFunction(x)
{
    nameOfValue = name;
}

string LinguisticValue::getNameOfValue()
{
    return nameOfValue;
}

LinguisticValue::~LinguisticValue()
{
    //dtor
}
