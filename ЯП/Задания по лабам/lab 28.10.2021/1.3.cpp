// ���� ������� �������������� a � b. ����� ��� ������� S = a�b ��������� P = 2�(a + b).
#include <iostream> 
using namespace std;
int main()
{
	double a, b, s, p;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ������\n";
	cin >> a;
	cin >> b;
	s = a * b;
	p = (a + b) * 2;
	cout << "\n�������� ����� " << p << " ������� ����� " << s;

}