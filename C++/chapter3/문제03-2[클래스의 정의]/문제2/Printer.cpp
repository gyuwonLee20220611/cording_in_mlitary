#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

void Printer::SetString(char * str)
{
    string = str;
}

void Printer::ShowString()
{
    cout << string << endl;
}