#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	const double e = 2.71828;
	int a, b;
	double g;
	setlocale(LC_ALL, "RUS");
	cout << "������� �������� � � b \n";
	cin >> a >> b;
	if (a * b < 5) g = pow(e, a - b);
	else if ((5 < (a * b)) && ((a * b) < 100)) g = sqrt(a + b);
	else if (100 < (a * b)) g = 2 * a * b;
	cout << "\n�������� g (e ����� ������ 2.71828) ����� " << g;
	return 0;

}