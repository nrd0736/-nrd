#include<iostream>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "Введите целое число \n";
	cin >> a;
	if (a == 0) {
		cout << "Число ни чётное, ни нечётное (равно 0)"; goto exit;;
	}
	if (a % 2 == 0) cout << "\nЧисло чётное";
	else cout << "\nЧисло нечётное";
	exit:
	return 0;
}