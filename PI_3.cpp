#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n_1;
	cin >> n_1;
	for (int i = 0; i <= n_1; i++) {
		cout << i << "  ";
	}
	cout << endl << endl;
 
	srand(time(0));
	int n = 1 + rand() % 100;
	cout << n << endl;
	for (int j = 0; j <= n; j++) {
		cout << j << "  ";
	}
	cout << endl << endl;
}