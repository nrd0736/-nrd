#include <iostream>
using namespace std;
unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void show_binary(unsigned int u);
int main()
{
	char ch;
	int sh, con;
	setlocale(LC_ALL, "RUS");
	imput:
	cout << "Введите исходный символ над которым происходит операция сдвига, введите 0 для установки значения по умолчанию (T)  ";
	cin >> ch;
	if (ch == '0')ch = 'T';
	cout << "\nВведите количеество циклических сдвигов,введите 0 для установки значения по умолчанию (8)  ";
	cin >> sh;
	if (sh == 0) sh = 8;
	chose:
	cout << "\n Выберите дейстиве\n";
	cout << "1. Циклический сдвиг вправо. Исходный элемент -" << ch << " ,колличествое единичных сдвигов- " << sh;
	cout << "\n2. Циклический сдвиг влево. Исходный элемент -" << ch << " ,колличествое единичных сдвигов- " << sh<<"\n";
	cout << "3. Задать новые параметры.\n";
	cin >> con;
	if (con != 1 && con != 2 && con!=3)
	{
		cout << "\nОшибка.Нет такого действия;\n";
			goto chose;
	}
	switch (con)
	{
	case(1):
	{
		for (int i = 0; i < sh; i++)
		{
			ch = rrotate(ch, 1);
				show_binary(ch);
		}
		break;
	}
	case(2):
	{
		for (int i = 0; i < sh; i++)
		{
			ch = lrotate(ch, 1);
			show_binary(ch);
		}
		break;
	}
	case (3):
	{
		goto imput;
		break;
	}
	}
}

unsigned char lrotate(unsigned char val, int n)
{
	unsigned int t;
	t = val;
	for (int i = 0; i < n; i++)
	{
		t = t << 1;
		if (t & 256)
			t = t | 1;
	}


	return t;
}
unsigned char rrotate(unsigned char val, int n)
{
	unsigned int t;
	t = val;
	t = t << 8;
	for (int i = 0; i < n; i++)
	{
		t = t >> 1;
		if (t & 128)
			t = t | 32768;
	}
	t = t >> 8;
	return t;
}
void show_binary(unsigned int u)
{
	int t;
	for (t = 128; t > 0; t = t / 2)
	{
		if (u & t) cout << "1";
		else cout << "0";
	}
	
	cout << "\n";

}