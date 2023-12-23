#include <iostream>
#include <cstdlib>

using namespace std;

int getRandomNumber(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main() {
	srand(time(0));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 1 + rand() % 100;
		cout << x << "  ";
	}

	cout << endl << endl;
	
	int g;
	cout << "Введите количество случайных чисел: ";
	cin >> g;

	// Устанавливаем начальное значение для генератора случайных чисел
	srand(static_cast<unsigned int>(time(0)));

	// Генерируем и выводим 'n' случайных чисел
	for (int i = 0; i < g; i++) {
		int randomNumber = getRandomNumber(1, 100); // Генерация чисел в диапазоне от 1 до 100
		cout << randomNumber << " ";
	}

	return 0;
}
