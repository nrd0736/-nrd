#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int ch, b = 0;
	cout << "��� ������������� ������ ����\n��� ��������� ������� ������� �� ����?\n";
	cout << "1. ���� 1000\n2. �����-86\n3. �������\n4. ��� 568\n";
	cin >> ch;
			switch (ch)
			{
			case(1): b++; cout << "\n��� �����: ���� 1000"; break; 
			case(2): cout << "\n��� �����: �����-86"; break; 
			case(3):cout << "\n��� �����: �������"; break;
			case(4):cout << "\n��� �����: ��� 568"; break;
			}
	cout << "\n� ����� ���� ��������� ���������� �� ������������� ���\n";
	cout << "\n1. 1987\n2. 1991\n3. 1986\n4. 1979\n";
	cin >> ch;
		switch (ch)
		{
		case(1):cout << "\n��� �����: 1987"; break;
		case(2):cout << "\n��� �����: 1991"; break;
		case(3):b++; cout << "\n��� �����: 1986"; break;
		case(4):cout << "\n��� �����: 1979"; break;
		}
	cout << "\n������� ���������� ���� ������������ ���� ����� ��� �������������� ��������� ������ ����� ������\n";
	cout << "\n1. 2\n2. 15\n3. 4\n4. 56\n";
	cin >> ch;
		switch (ch)
		{
		case(1):cout << "\n��� �����: 2\n"; break;
		case(2):cout << "\n��� �����: 15\n"; break;
		case(3):b++; cout << "\n��� �����: 4\n"; break;
		case(4):cout << "\n��� �����: 56\n"; break;
		}
			if (b == 0) cout << "\n���� ������: 2";
			if (b == 1) cout << "\n���� ������: 3";
			if (b == 2) cout << "\n���� ������: 4";
			if (b == 3) cout << "\n���� ������: 5";

			return 0;

}