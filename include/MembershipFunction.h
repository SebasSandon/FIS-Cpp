#ifndef MEMBERSHIPFUNCTION_H
#define MEMBERSHIPFUNCTION_H


class MembershipFunction
{
    public:
        MembershipFunction(double);
        virtual ~MembershipFunction();
        void Triangle(double,double,double);
        void Trapezoid(double,double,double,double);
        void FunctionL(double,double);
        void Gamma(double,double);
        double getMembershipValue();

    private:
        double valueA;
        double valueB;
        double valueC;
        double valueD;
        double crispValue;
        double membershipValue; //Result

};

#endif // MEMBERSHIPFUNCTION_H
