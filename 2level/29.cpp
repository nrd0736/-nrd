#include<iostream>
using namespace std;
int main()
{
	double i1;
	int i2;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ";
	cin >> i1;
	i2 = i1;
	if (i2 == i1) cout << "\n����� �����";
	else cout << "\n����� �� ����� ";

}