/*
*  Copyright © 2021 NotAddyPug

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#include <iostream>
#include "Math.h"
using namespace std;
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "AddyPug Calc (v1.6.1 32bit)" <<endl;
    cout << "Copyright 2021 NotAddyPug. Licensed Under Apache 2.0" << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b, aXb or axb | a/b | x^y"
        << endl;

    Calculator c;
    cin >> x >> oper >> y;
    result = c.Calculate(x, oper, y);
    cout << "Result is: " << result << endl;
    return 0;
}

