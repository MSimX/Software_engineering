#include <iostream>

using namespace std;

int Fibonachi(int number);

int main() {
	setlocale(LC_ALL, "rus");
	int num = 0;
	cin >> num;

	for (int i = 0; i <= num; i++) {
		cout << Fibonachi(i) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

int Fibonachi(int number) {
	if (number < 2) { return 1; }
	else { return (Fibonachi(number - 1) + Fibonachi(number - 2)); }
}