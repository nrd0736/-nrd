#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x, y, z;
	double a;
	cout << "������� � ";
	cin >> x;
	cout << "\n������� Y ";
	cin >> y;
	cout << "\n������� Z ";
	cin >> z;
	a = abs(sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
	cout << "\n����� �������� ����� " << a;

}