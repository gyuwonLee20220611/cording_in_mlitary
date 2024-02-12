#include <iostream>
#include "Calculator.h"
using namespace std;

int main ()
{
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.5 - 1.7 = "<<cal.Min(3.5, 1.7)<<endl;
    cout<<"2.2 * 1.5 = "<<cal.Mul(2.2, 1.5)<<endl;
    cout<<"4.9 / 0.7 = "<<cal.Div(4.9, 0.7)<<endl;
    cal.ShowOpCount();
}