#include<iostream>
#include<cmath>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, m, n;
	double f,X=1, x,k=1,Si;
	for (x = -1.1; x < 0.3; x += 0.2)
	{
		for (m = 1; m <= 4; m++)
		{
			n = m;
			for (i = 1; i <= n; i++)
			{
				X = X * x;
				k = k * sin(x * m);
			}
			f = X * k;
			cout << "Значение функции =" << f << " При m=" << m << "\n";
			if (m == 4) cout << "Вычеислено при х=" << x << "\n";
			X = 1;
			k = 1;
		}

	}
}