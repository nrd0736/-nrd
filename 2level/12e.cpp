#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x, y;
	cout << "������� X ���������� ";
	cin >> x;
	cout << "\n������� Y ���������� ";
	cin >> y;
	if ((x == 0) && (y == 0)) cout << "\n������. ������� ���������� ����� �";
	else if ((x > 0) && (y > 0)) cout << "\nI ��������";
	else if ((x < 0) && (y > 0)) cout << "\nII ��������";
	else if ((x < 0) && (y < 0)) cout << "\nIII ��������";
	else if ((x > 0) && (y < 0)) cout << "\nVI ��������";
}