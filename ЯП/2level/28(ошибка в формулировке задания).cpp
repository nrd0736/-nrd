#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d, k, dis;
	double x1, x2, x3, x4, err;
	setlocale(LC_ALL, "RUS");
	cout << "y=ax^2+bx+c Введите коэфиценты \n";
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "y=dx+k Введите коэфиценты \n";
	cout << "d= ";
	cin >> d;
	cout << "k= ";
	cin >> k;
	dis = pow(b, 2) - 4 * a * c;
	if (dis > 0)
	{
		x1 = (double)(-b + sqrt(dis)) / 2 * a;
		x2 = (double)(-b - sqrt(dis)) / 2 * a;
	}
	else if (dis == 0)
	{
		x1 = (double)-b / 2 * a;
		x2 = 0;
	}
	else if (dis < 0) err++;
}