#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "RUS");
	cout << "����� 1 ����� ";
	cin >> a;
	cout << "\n";
	cout << "����� 2 ����� ";
	cin >> b;
	cout << "\n";
	cout << "����� 3 ����� ";
	cin >> c;
	cout << "\n";

	if ((a != b) && (a != c) && (b != c)) { cout << "������ ���\n"; goto lp1; }

	if (a == b)
	{
		a += 5;
		b += 5;
		c += 5;
	}
	if (a == c)
	{
		a += 5;
		b += 5;
		c += 5;
	}
	if (c == b)
	{
		a += 5;
		b += 5;
		c += 5;
	}

	cout << "����� 1 ����� \t" << a << "\n";
	cout << "����� 2 ����� \t" << b << "\n";
	cout << "����� 3 ����� \t" << c << "\n";
lp1: cout << "     ";
}