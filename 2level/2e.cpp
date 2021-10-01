#include<iostream>
#include<cmath>
using namespace std;
double sum = 0;
int main()
{
	double N, k;
	int i;
	setlocale(LC_ALL, "RUS");
	cout << "Введите числ N  ";
	cin >> N;
	cout << "\nВведите степень К  ";
	cin >> k;
	cout << "\n";
	for (i = 1; i <= N; i++) sum = sum + pow(i, k);
	cout << "Ответ  " << sum;
	return 0;
}