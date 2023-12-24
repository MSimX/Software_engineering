#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    float a;
    double b;
    long double c;

    cout.precision(1000000);

    cout << "sinf: " << sinf(a) << endl;
    cout << "sin : " << sin(b) << endl;
    cout << "sinl: " << sinl(c) << endl << endl;
    
    cout << "cosf: " << cosf(a) << endl;
    cout << "cos : " << cos(b) << endl;
    cout << "cosl: " << cosl(c) << endl << endl;
    
    cout << "tanf: " << tanf(a) << endl;
    cout << "tan : " << tan(b) << endl;
    cout << "tanl: " << tanl(c) << endl;


    cout << "cotf: " << 1.0f / tanf(a) << endl;
    cout << "cot : " << 1.0 / tan(b) << endl;
    cout << "cotl: " << 1.0L / tanl(c) << endl;

    system("pause");

}
