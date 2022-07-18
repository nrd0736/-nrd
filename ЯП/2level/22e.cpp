#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, i1, j, j1, sum=0, mat[20][20];
	cout << "¬ведите колличество строк ";
	cin >> i1;
	cout << "\n¬ведите число столбцов ";
	cin >> j1;
	cout << "\n¬ведите данные матрицы\n";
	for (j = 0; j < j1; j++)
	{
		cout << "\n";
		for (i = 0; i < i1; i++)
		{
			cout << "";
			cin >> mat[i][j];
			
			
		}
	}
	

	
	for (i = 0, j = 0; ((i < i1) && (j < j1)); i++, j++) sum += mat[i][j];

	cout << "\n—лед матрицы равен " << sum;
	return 0;
}