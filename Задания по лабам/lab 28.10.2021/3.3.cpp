#include<iostream>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ����� \n";
	cin >> a;
	if (a == 0) {
		cout << "����� �� ������, �� �������� (����� 0)"; goto exit;;
	}
	if (a % 2 == 0) cout << "\n����� ������";
	else cout << "\n����� ��������";
	exit:
	return 0;
}