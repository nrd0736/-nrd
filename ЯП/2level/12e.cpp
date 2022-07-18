#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x, y;
	cout << "Введите X координату ";
	cin >> x;
	cout << "\nВведите Y координату ";
	cin >> y;
	if ((x == 0) && (y == 0)) cout << "\nОшибка. Введена координата точки О";
	else if ((x > 0) && (y > 0)) cout << "\nI четверть";
	else if ((x < 0) && (y > 0)) cout << "\nII четверть";
	else if ((x < 0) && (y < 0)) cout << "\nIII четверть";
	else if ((x > 0) && (y < 0)) cout << "\nVI четверть";
}