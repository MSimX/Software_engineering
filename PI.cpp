#include <iostream>
#include <cmath> 

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "введите 2 целых числа" << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	int summ, proizv, vichet; 
	double delen_ostatok, delen_celoe;
	summ = a + b;
	proizv = a * b;
	vichet = a - b;
	delen_ostatok = a % b;
	delen_celoe = a / b;
	cout << "summa = a + b = " << summ << endl
		<< "proizvedenie = a * b = " << proizv << endl 
		<< "vichetanie = a - b = " << vichet << endl
		<< "delenie_celoe = a / b = " << delen_celoe << endl
		<< "ostatok = " << delen_ostatok;
}