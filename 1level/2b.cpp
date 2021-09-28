#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, f, z;
	cout << "¬ведите число a " << "\n";
	cin >> a;
	cout << "¬ведите число b " << "\n";
	cin >> b;
	cout << "¬ведите число f " << "\n";
	cin >> f;
	cout << "a=" << a << "\n";
	cout << "b=" << b << "\n";
	cout << "f=" << f << "\n";
	cout << "¬ычисл€ем по следующей формуле :(а + b Ч f / а) + f * a * a Ч (a + b)\n";
	z = (a + b - f / a) + f * a * a - (a + b);
	cout << "¬ыражение равно " << z;

	return 0;
}