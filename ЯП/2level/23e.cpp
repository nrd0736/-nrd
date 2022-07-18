#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int i, r;
	cout << "Колличество чисел\n";
	cin >> r;
	float sr = 0, ms[] = { r };
	cout << "\n Вводите числа";
	for (i = 0; i < r; i++) {
		cin >> ms[i];
		cout << "\t";
	}
	for (i = 0; i < r; i++)
	{
		sr += ms[i];
	}
	cout << "\nСреднее арифметическо: " << (float)sr / r;
}