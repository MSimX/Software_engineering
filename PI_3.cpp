#include <iostream>

using namespace std;

int main() {
	srand(time(0));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 1 + rand() % 100;
		cout << x << "  ";
	}
}
