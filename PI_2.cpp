#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Число какой точности хотите посчитать?" << endl
		<< "1 - Одинарное(32 бит)" << endl
		<< "2 - Двойное(64 бит)" << endl
		<< "3 - Четырехкратное(128бит)" << endl;
	int number;
	cout << "Введите вариант - ";
	cin >> number;
	if (number == 1) { 
		float i;
		cout << "Введите число - ";
		cin >> i;
		cout << "sin(" << i << ") = " << sin(i) << endl
			<< "cos(" << i << ") = " << cos(i) << endl
			<< "tang(" << i << ") = " << tan(i) << endl
			<< "cotang(" << i << ") = " << sin(i) / cos(i);
	}
	else if (number == 2) {
		double i;
		cout << "Введите число - ";
		cin >> i;
		cout << "sin(" << i << ") = " << sin(i) << endl
			<< "cos(" << i << ") = " << cos(i) << endl
			<< "tang(" << i << ") = " << tan(i) << endl
			<< "cotang(" << i << ") = " << sin(i) / cos(i);
	}
	else if (number == 3) {
		long double i;
		cout << "Введите число - ";
		cin >> i;
		cout << "sin(" << i << ") = " << sin(i) << endl
			<< "cos(" << i << ") = " << cos(i) << endl
			<< "tang(" << i << ") = " << tan(i) << endl
			<< "cotang(" << i << ") = " << sin(i) / cos(i);
	}
}