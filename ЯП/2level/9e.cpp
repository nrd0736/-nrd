#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i,n=0;
	double sum=0;
	cout << "¬ведите размер массива ";
	cin >> n;
	double A1[50];
	for (i = 0; i < n; i++)
	{
		cin >> A1[i]; cout << "\n";
	}
	for (i = 0; i < n; i++)
	{
		if (abs(A1[i]) > 2.5) sum = sum + (A1[i] * A1[i]);
	}
	cout << "\n—умма равна " << sum;
}