#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, n, g, k;
	g = 1;
	cout << "������� �����\n";
	cin >> n;
	cout << "������� �������\n";
	cin >> k;
	for (i = 1; i <= k; i++)
		g = g * n;
	cout << "����� " << g;
}