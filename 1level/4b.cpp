#include<iostream>
using namespace std;
int main()
{
	double m;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ������\n";
	cin >> m;
	cout << "���-�� �� ����� " << (double)m / 1000;
}
