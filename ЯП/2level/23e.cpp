#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int i, r;
	cout << "����������� �����\n";
	cin >> r;
	float sr = 0, ms[] = { r };
	cout << "\n ������� �����";
	for (i = 0; i < r; i++) {
		cin >> ms[i];
		cout << "\t";
	}
	for (i = 0; i < r; i++)
	{
		sr += ms[i];
	}
	cout << "\n������� �������������: " << (float)sr / r;
}