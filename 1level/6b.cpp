#include <iostream>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "RUS");
	cout << "������� ��� �����\n ";
	cin >> a;
	cin >> b;
	if (a > b)
		cout << "������";
	else if (a < b) cout << "������";
	else cout << "�����";
	return 0;
}