#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double T, V, ALF;
	cout << "������� �������� ���� ";
	cin >> V;
	cout << "\n������� ����� ����� ���� ";
	cin >> T;
	ALF = asin((9.8*T)/(2*V));
	cout << "���� ������ ���� (��� ��������� ���������� ������� 9,8) ����� " << ALF * 57.3 << " ��������";
	return 0;
}