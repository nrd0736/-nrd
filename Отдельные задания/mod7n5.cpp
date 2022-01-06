#include <iostream>
using namespace std;
void counter();
int main()
{
	char s;
	setlocale(LC_ALL, "RUS");
	cout << "\nНажмите <ENTER> + символ для вызова функции или <1> + <ENTER> для выхода из программы";
	for (;;)
	{
		cin >> s;
		if (s == '1') goto exit;
		else counter();


	}
	exit:
	return 0;
}
void counter()
{
	static int m;
	m++;
	cout << "\nЧисло вызовов равно " << m;
}