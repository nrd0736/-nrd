#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, f, z;
	cout << "������� ����� a " << "\n";
	cin >> a;
	cout << "������� ����� b " << "\n";
	cin >> b;
	cout << "������� ����� f " << "\n";
	cin >> f;
	cout << "a=" << a << "\n";
	cout << "b=" << b << "\n";
	cout << "f=" << f << "\n";
	cout << "��������� �� ��������� ������� :(� + b � f / �) + f * a * a � (a + b)\n";
	z = (a + b - f / a) + f * a * a - (a + b);
	cout << "��������� ����� " << z;

	return 0;
}