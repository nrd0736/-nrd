#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,n;
	setlocale(LC_ALL, "RUS");
	cout << "������� ������� ������� ��������� ";
	cin >> n;
	cout << "\n\t\t������� ���������\n";
	cout << "\t�����\t\t\t\t������� �����\n";
	for (i = 1; i <= n; i++)
	{
		cout << "\t" << i << "\t\t\t\t" << pow(i, 2) << "\n";
	}
}