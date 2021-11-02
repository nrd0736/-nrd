#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, n;
	double sum=0;
	setlocale(LC_ALL, "RUS");
	cout << "Введите n\n";
	cin >> n;
	double mn[] = { n };
	for (i = 1; i <= n+1; i++)
	{
		if (i == 1) mn[i] = sin(i);
		else
		{
			mn[i] =(double) mn[i - 1] +sin(i);
		}
		cout << mn[i] << "\n";
	}
	for (i = 1; i <= n + 1; i++)
	{
		sum = sum + 1 / mn[i];
	}
	cout << "\nОтвет: " << (double)sum;
	return 0;
}