#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double n;
    cout << "Enter the angel in degrees" << endl; cin >> n;
    cout << endl;

    cout.precision(1000000);

    // Выполнение вычислений для чисел одинарной точности (float)
    cout << "sin: " << sinf(n) << endl;
    cout << "cos: " << cosf(n) << endl;
    cout << "tan: " << tanf(n) << endl;
    cout << "cot: " << 1.0f / tanf(n) << endl << endl;

    // Выполнение вычислений для чисел двойной точности (double)

    cout << "sin: " << sin(n) << endl;
    cout << "cos: " << cos(n) << endl;
    cout << "tan: " << tan(n) << endl;
    cout << "cot: " << 1.0 / tan(n) << endl << endl;

    // Выполнение вычислений для чисел 4-кратной точности (long double)  

    cout << setprecision(std::numeric_limits<long double>::digits10 + 1);
    cout << "sin: " << sinl(n) << endl;
    cout << "cos: " << cosl(n) << endl;
    cout << "tan: " << tanl(n) << endl;
    cout << "cot: " << 1.0L / tanl(n) << endl << endl;

    system("pause");

}
