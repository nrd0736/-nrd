//Дан размер файла в байтах. Используя операцию деления нацело,
//найти количество полных килобайтов, которые занимает данный файл
//(1 килобайт = 1024 байта).
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int b;
	double kb;
	setlocale(LC_ALL, "RUS");
	cout << " Введите количество байтов \n";
	cin >> b;
	kb = ceil((double)b / 1024);
	cout << "\nДанный файл занимает " << kb << " килобайт.";
}

