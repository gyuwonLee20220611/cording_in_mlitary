#ifndef __CALCULATOR__
#define __CALCULATOR__

class Calculator
{
private:
    int addition;
    int subtraction;
    int multiplication;
    int division;
public:
    void Init();
    float Add(float num1, float num2);
    float Min(float num1, float num2);
    float Mul(float num1, float num2);
    float Div(float num1, float num2);
    void ShowOpCount();

};
#endif

