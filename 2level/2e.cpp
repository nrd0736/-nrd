#include<iostream>
#include<cmath>
using namespace std;
double sum = 0;
int main()
{
	double N, k;
	int i;
	setlocale(LC_ALL, "RUS");
	cout << "������� ���� N  ";
	cin >> N;
	cout << "\n������� ������� �  ";
	cin >> k;
	cout << "\n";
	for (i = 1; i <= N; i++) sum = sum + pow(i, k);
	cout << "�����  " << sum;
	return 0;
}