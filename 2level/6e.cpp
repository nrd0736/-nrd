#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << " 1 �����������\n 2 �������\n 3 �����\n 4 �������\n 5 �������\n 6 �������\n 7 �����������\n";
	cout << "������� ����� ";
	cin >> a;
	switch (a)
	{
	case(1): {cout << "�����������"; break; }
	case(2): {cout << "�������"; break; }
	case(3): {cout << "�����"; break; }
	case(4): {cout << "�������"; break; }
	case(5): {cout << "�������"; break; }
	case(6): {cout << "�������"; break; }
	case(7): {cout << "�����������"; break; }
	}
}