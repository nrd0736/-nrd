#include<iostream>
#include<string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	string str;
	int count = 0;
	cout << "������� ������ " << endl;
	getline(cin, str);
	for (int i = 0; str.length() >= i; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	cout << count+1 << endl;
}