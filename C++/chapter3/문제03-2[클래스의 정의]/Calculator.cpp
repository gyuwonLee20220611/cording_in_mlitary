#include <iostream>
#include "Calculator.h"
using namespace std;

    void Calculator::Init()
    {
        addition = 0;
        subtraction = 0;
        multiplication = 0;
        division = 0;
    }
    
    float Calculator::Add(float num1, float num2)
    {
        addition++;
        return num1+num2;
    }
    
    float Calculator::Min(float num1, float num2)
    {
        subtraction++;
        return num1-num2;
    }
    float Calculator::Mul(float num1, float num2)
    {
        multiplication++;
        return num1*num2;
    }
    
    float Calculator::Div(float num1, float num2)
    {
        division++;
        return num1/num2;
    }
    
    void Calculator::ShowOpCount()
    {
        cout<<"덧셈: "<<addition<<" 뺄셈: "<<subtraction<<" 곱셈: "<<multiplication<<" 나눗셈: "<<division;
    }
