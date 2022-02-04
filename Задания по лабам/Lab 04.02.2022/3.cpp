#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	string str,str1,str2;
	char buf;
	int size;
	cout << "¬ведите строку " << endl;
	getline(cin, str);
	if (str.length() % 2 != 0)
	{
		size = str.length() % 2;
	}
	else
	{
		size = ((str.length() - 1) / 2) + 1;
	}
	str1.insert(0, str, 0, size);
	str2.insert(0, str, size);
	cout << str2<< str1 << endl;
}