#include <iostream>
using namespace std;
void counter();
int main()
{
	char s;
	setlocale(LC_ALL, "RUS");
	cout << "\n������� <ENTER> + ������ ��� ������ ������� ��� <1> + <ENTER> ��� ������ �� ���������";
	for (;;)
	{
		cin >> s;
		if (s == '1') goto exit;
		else counter();


	}
	exit:
	return 0;
}
void counter()
{
	static int m;
	m++;
	cout << "\n����� ������� ����� " << m;
}