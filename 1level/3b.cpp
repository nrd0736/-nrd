#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char a;
	cin >> a;
	if (a > 95) a -= 32;
	cout << a;
}


 