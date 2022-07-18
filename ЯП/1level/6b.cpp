#include <iostream>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "RUS");
	cout << "Введите два числа\n ";
	cin >> a;
	cin >> b;
	if (a > b)
		cout << "БОЛЬШЕ";
	else if (a < b) cout << "Меньше";
	else cout << "Равно";
	return 0;
}