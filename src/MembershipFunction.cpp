#include "MembershipFunction.h"

MembershipFunction::MembershipFunction(double x)
{
    crispValue = x;
}

void MembershipFunction::Triangle(double a, double b, double c)
{
    valueA = a;
    valueB = b;
    valueC = c;

    if(crispValue >= valueA && crispValue <= valueB){
        membershipValue = (crispValue - valueA)/(valueB - valueA);
    }else if(crispValue >= valueB && crispValue <= valueC){
        membershipValue = (valueC - crispValue)/(valueC - valueB);
    }else{
        membershipValue = 0;
    }
}

void MembershipFunction::Trapezoid(double a, double b, double c, double d)
{
    valueA = a;
    valueB = b;
    valueC = c;
    valueD = d;

    if(crispValue >= valueA && crispValue <= valueB){
        membershipValue = (crispValue - valueA)/(valueB - valueA);
    }else if(crispValue >= valueB && crispValue <= valueC){
        membershipValue = 1;
    }else if(crispValue >= valueC && crispValue <= valueD){
        membershipValue = (valueD - crispValue)/(valueD - valueC);
    }else{
        membershipValue = 0;
    }
}

void MembershipFunction::FunctionL(double a, double b)
{
    valueA = a;
    valueB = b;

    if(crispValue <= valueA){
        membershipValue = 1;
    }else if(crispValue > valueA && crispValue < valueB){
        membershipValue = (valueB - crispValue)/(valueB - valueA);
    }else{
        membershipValue = 0;
    }
}

void MembershipFunction::Gamma(double a, double b)
{
    valueA = a;
    valueB = b;

    if(crispValue > valueA && crispValue < valueB){
        membershipValue = (crispValue - valueA)/(valueB - valueA);
    }else if(crispValue >= valueB){
        membershipValue = 1;
    }else{
        membershipValue = 0;
    }
}

double MembershipFunction::getMembershipValue()
{
    return membershipValue;
}

MembershipFunction::~MembershipFunction()
{
    //dtor
}
