#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, f;
	cout << "������� � ";
	cin >> x;
	cout << "\n������� Y ";
	cin >> y;
	x = x / 57.3;
	y = y / 57.3;
	f = (pow((1 - tan(x)),( 1 / tan(x)))) + cos(x - y);
	cout << "\n�����  " << f;
}