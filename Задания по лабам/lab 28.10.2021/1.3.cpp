#include <iostream>
using namespace std;
int main()
{
	double a, b, s, p;
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите длины сторон\n";
	cin >> a;
	cin >> b;
	s = a * b;
	p = (a + b) * 2;
	cout << "\nѕериметр равен " << p << " площадь равна " << s;

}