#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
	int a,h;
public:
	Triangle(int A, int H) { a = A; h = H; }
	double hypot()
	{
		double g;
		g = (double)(sqrt(pow(h, 2) + pow(a, 2)));
		return g;
	}
	double area()
	{
		double s;
		s = 0.5 * a * h;
		return s;
	}
};
int main()
{
	Triangle A(2,3), B(6,10), C(3,8);
	setlocale(LC_ALL, "Rus");
	cout << "���������� ������� ������������ " << A.hypot() << " , ������� ����� " << A.area() << "\n";
	cout << "���������� ������� ������������ " << B.hypot() << " , ������� ����� " << B.area() << "\n";
	cout << "���������� �������� ������������ " << C.hypot() << " , ������� ����� " << C.area() << "\n";

}