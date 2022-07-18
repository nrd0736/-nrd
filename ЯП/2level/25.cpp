#include <iostream>
using namespace std;
int main()
{
	int i,n, sum=0;
	setlocale(LC_ALL, "RUS");
	cout << "Введите границу интервала \t";
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		if (i % 5 == 0) sum += i;
		
	}
	cout << "\nОтвет " << sum;
	return 0;
}