#include <iostream>
#include<cmath>
using namespace std;
double myf(char ch, int a = 10, int b = 20);
int main()
{
	int a=98, b=323;
	setlocale(LC_ALL, "RUS");
	char ch = 'I';
	myf(ch);
	myf(ch, a);
	myf(ch, a, b);


}
double myf(char ch, int a, int b )
{
	cout << "\t������ " << ch << " �������� 1 =" << a << " �������� 2 =" << b << "\n";

	return 0;

}