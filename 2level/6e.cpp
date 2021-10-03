#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << " 1 Понедельник\n 2 Вторник\n 3 Среда\n 4 Четверг\n 5 Пятница\n 6 Суббота\n 7 Воскресенье\n";
	cout << "Введите номер ";
	cin >> a;
	switch (a)
	{
	case(1): {cout << "Понедельник"; break; }
	case(2): {cout << "Вторник"; break; }
	case(3): {cout << "Среда"; break; }
	case(4): {cout << "Четверг"; break; }
	case(5): {cout << "Пятница"; break; }
	case(6): {cout << "Суббота"; break; }
	case(7): {cout << "Воскресенье"; break; }
	}
}