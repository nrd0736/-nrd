#include<iostream>
using namespace std;
int main()
{
	double m;
	setlocale(LC_ALL, "RUS");
	cout << "Введите число метров\n";
	cin >> m;
	cout << "Кол-во км равно " << (double)m / 1000;
}
