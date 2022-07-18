#include <iostream>
#include <string>
using namespace std; 
int main() {
	setlocale(LC_ALL, "RUS");
	string str;
	int size;

	cout << "¬ведите строку:\n";
	getline(cin,str);
	size = str.length();
	cout << str[2] << endl;//1
	cout << str[size - 2] << endl;//2
	cout << str[0] << str[1] << str[2] << str[3] << str[4] << endl;//3
	for (int i = 0; i <= (size - 3); i++) cout << str[i];//4
	cout << endl;
	for (int i = 0; i <= size; i++)//5
	{
		if ((i % 2 == 0))
			cout << str[i];
	}
	cout << endl;
	for (int i = 0; i <= size; i++)//6
	{
		if ((i % 2 != 0) || i == 1)
			cout << str[i];
	}
	cout << endl;
	for (int i = size; i>=0; i--)cout << str[i];//7
	cout << endl;


	for (int i = size; 0 <= i; i--)//8
	{
		if ((i % 2 != 0) || i == 1)
			cout << str[i];
	}
	cout << endl << size;
	return 0;
}