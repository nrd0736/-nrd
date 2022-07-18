#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int NUM, m = 100, a = 666, inc = 777, x, i;
	double x0 = 6, rand;
	cout << "¬ведите количесвто псвдослучайных чисел ";
	cin >> NUM; 
	for (i = 1; i <= NUM; i++)
	{
		
		x0 = ((a * x0) + inc) / m;
		rand = x0 / m;
		cout << "\t" << rand;
	}
}