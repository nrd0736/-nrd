#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
		int a, b;
		cout << "Введите число (менее 100)  ";
		cin >> a;
		if ((a % 10) > (a / 10))
		{
			cout << "Большая цифра " << (a % 10) << "\n";
			cout << "Меньшая цифра " << (a / 10) << "\n";
		}
		if ((a % 10) < (a / 10))
		{
			cout << "Меньшая цифра " << (a % 10) << "\n";
			cout << "Большая цифра " << (a / 10) << "\n";
		}
		if ((a % 10) == (a / 10))
		{
			cout << "Цифры равны " << (a % 10) << "\n";
		}
		return 0;
}