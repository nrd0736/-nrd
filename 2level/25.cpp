#include <iostream>
using namespace std;
int main()
{
	int i,n, sum=0;
	setlocale(LC_ALL, "RUS");
	cout << "������� ������� ��������� \t";
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		if (i % 5 == 0) sum += i;
		
	}
	cout << "\n����� " << sum;
	return 0;
}