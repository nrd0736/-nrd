// Даны стороны прямоугольника a и b. Найти его площадь S = a·b ипериметр P = 2·(a + b).
#include <iostream> 
using namespace std;
int main()
{
	double a, b, s, p;
	setlocale(LC_ALL, "RUS");
	cout << "Введите длины сторон\n";
	cin >> a;
	cin >> b;
	s = a * b;
	p = (a + b) * 2;
	cout << "\nПериметр равен " << p << " площадь равна " << s;

}