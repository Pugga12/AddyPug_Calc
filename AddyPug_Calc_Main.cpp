#include <iostream>
#include "Math.h"
using namespace std;
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "AddyPug Calc (C++, V1.6, Windows 64-bit Edition)" <<endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b, aXb or axb | a/b | x^y"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result is: " << result << endl;
        break;
    }
    return 0;
}

