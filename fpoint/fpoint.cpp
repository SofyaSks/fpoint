#include <iostream>

using namespace std;

template <typename T> void myswap(T* num1, T* num2) {
	T tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
template <typename T> void sumarr(T array[], int length, T* num) {
	for (int i = 0; i < length; i++)
		*num += *(array + i);
}

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;

	/*cout << "Введите два числа: ";
	cin >> n >> m;
	myswap(&n, &m);
	cout << n << " " << m;
	cout << endl;
	bool f1 = false, f2 = true;
	myswap(&f1, &f2);
	cout << f1 << " " << f2;*/

	// Задача 1

	cout << "Изначальный массив: \n[";
	int z1[5] = { 3, 2, 6, 4, 5 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << ", ";
	cout << "\b\b]\n";
	n = 0;
	sumarr(z1, 5, &n);
	cout << "Сумма всех элементов массива = " << n << "\n\n";
	return 0;
}