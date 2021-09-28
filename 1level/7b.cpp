#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "RUS");
	cout << "Число 1 равно ";
	cin >> a;
	cout << "\n";
	cout << "Число 2 равно ";
	cin >> b;
	cout << "\n";
	cout << "Число 3 равно ";
	cin >> c;
	cout << "\n";

	if ((a != b) && (a != c) && (b != c)) { cout << "Равных нет\n"; goto lp1; }

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

	cout << "Число 1 равно \t" << a << "\n";
	cout << "Число 2 равно \t" << b << "\n";
	cout << "Число 3 равно \t" << c << "\n";
lp1: cout << "     ";
}