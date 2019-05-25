#include <iostream>
#include "LinguisticValue.h"
#include "LinguisticVariable.h"

using namespace std;

int main()
{
    double input = 14;

    LinguisticValue *lv1 = new LinguisticValue(input,"Bajo");
    LinguisticValue *lv2 = new LinguisticValue(input,"Medio");
    LinguisticValue *lv3 = new LinguisticValue(input,"Alto");

    lv1->Triangle(1,5,9);
    lv2->Trapezoid(5,9,13,17);
    lv3->Gamma(13,17);

    LinguisticVariable *LV = new LinguisticVariable();
    LV->addLinguisticValue(lv1);
    LV->addLinguisticValue(lv2);
    LV->addLinguisticValue(lv3);

    int resultVector;
    resultVector = LV->getCountValues();

    cout << "Size vector: " << resultVector << endl;

    double resultMF = 0;

    resultMF = lv1->getMembershipValue();
    cout << "Result for " << lv1->getNameOfValue() << ": " << resultMF << endl;

    resultMF = lv2->getMembershipValue();
    cout << "Result for " << lv2->getNameOfValue() << ": " << resultMF << endl;

    resultMF = lv3->getMembershipValue();
    cout << "Result for " << lv3->getNameOfValue() << ": " << resultMF << endl;

    return 0;
}
