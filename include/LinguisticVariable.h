#ifndef LINGUISTICVARIABLE_H
#define LINGUISTICVARIABLE_H

#include <vector>
#include "LinguisticValue.h"

using namespace std;

class LinguisticVariable
{
    public:
        LinguisticVariable();
        virtual ~LinguisticVariable();
        void addLinguisticValue(LinguisticValue *);
        int getCountValues();

    private:
        vector<LinguisticValue *> linguisticsValues;
};

#endif // LINGUISTICVARIABLE_H
