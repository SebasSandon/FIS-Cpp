#ifndef LINGUISTICVALUE_H
#define LINGUISTICVALUE_H

#include <string>
using std::string;
#include "MembershipFunction.h"

class LinguisticValue : public MembershipFunction
{
    public:
        LinguisticValue(double,const string &);
        virtual ~LinguisticValue();
        string getNameOfValue();

    private:
        string nameOfValue;
};

#endif // LIGUISTICVALUE_H
