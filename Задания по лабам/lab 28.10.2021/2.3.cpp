//��� ������ ����� � ������. ��������� �������� ������� ������,
//����� ���������� ������ ����������, ������� �������� ������ ����
//(1 �������� = 1024 �����).
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int b;
	double kb;
	setlocale(LC_ALL, "RUS");
	cout << " ������� ���������� ������ \n";
	cin >> b;
	kb = ceil((double)b / 1024);
	cout << "\n������ ���� �������� " << kb << " ��������.";
}

