#include <iostream>
using namespace std;
int main()
{
	int i, j, k,zv=1,u,x,c,v,b;
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите число треугольников ";
	cin >> u;
	cout << "\n\n";
	for (i = 4; i >=1; i--)
	{
		
		for (k = 1; k <= i - 1; k++) cout << " ";
		for (c = 1; c <= u; c++)
		{
			for (j = 0; j < zv; j++) { cout << "*"; }

			for (x = 1; x <= (i * 2 - 1); x++) cout << " ";
		}
		
		zv += 2;
		cout << "\n";
	}
}