#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
		int a, b;
		cout << "������� ����� (����� 100)  ";
		cin >> a;
		if ((a % 10) > (a / 10))
		{
			cout << "������� ����� " << (a % 10) << "\n";
			cout << "������� ����� " << (a / 10) << "\n";
		}
		if ((a % 10) < (a / 10))
		{
			cout << "������� ����� " << (a % 10) << "\n";
			cout << "������� ����� " << (a / 10) << "\n";
		}
		if ((a % 10) == (a / 10))
		{
			cout << "����� ����� " << (a % 10) << "\n";
		}
		return 0;
}