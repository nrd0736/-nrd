#include<iostream>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ";
	cin >> n;
	if (n > 0) n += 1;
	if (n < 0) n -= 2;
	if (n == 0) n = 10;
	cout << "\n����� ����� " << n;
}