#include <iostream>
#include "Calculator.h"
using namespace std;

    void Init()
    {
        addition = 0;
        subtraction = 0;
        multiplication = 0;
        division = 0;
    }
    
    float Add(float num1, float num2)
    {
        addition++;
        return num1+num2;
    }
    
    float Min(float num1, float num2)
    {
        subtraction++;
        return num1-num2;
    }
    float Mul(float num1, float num2)
    {
        multiplication++;
        return num1*num2;
    }
    
    float Div(float num1, float num2)
    {
        division++;
        return num1/num2;
    }
    
    void ShowOpCount()
    {
        cout<<"덧셈: "<<addition<<" 뺄셈: "<<subtraction<<" 곱셈: "<<multiplication<<" 나눗셈: "<<division;
    }
