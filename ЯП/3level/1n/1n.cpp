#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char bufer;
	string path;
	cout << "������� �������� ����� ������� txt (���� ������ ���������� � ����� �������� � ����������) " << endl;
	er:
	cin >> path;
	int Lsk=0, Rsk=0;
	fstream fin(path+".txt");
	fstream fout("out.txt");
	if (fin.is_open()) cout << "\n���� ������,��������� ��������\n";
	else
	{
		cout << "������ ��� �������� �����, ���������� �����" <<endl;
		goto er;
	}
	while (fin.get(bufer))
	{
		if (bufer == '{') Lsk++;
		else if (bufer == '}') Rsk++;
	}
	fin.close();
	if (Lsk == Rsk) {
		fout << "������ ������ �������";
		cout << "������ ������ �������";
	}
	else {
		fout << "������ ������ �� �������";
		cout << "������ ������ �� �������";
	}
	fout.close();
	
}