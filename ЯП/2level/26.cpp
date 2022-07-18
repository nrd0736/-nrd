#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,n;
	setlocale(LC_ALL, "RUS");
	cout << "Ââåäèòå ãðàíèöó òàáëèöû êâàäðàòîâ ";
	cin >> n;
	cout << "\n\t\tÒÀÁËÈÖÀ ÊÂÀÄÐÀÒÎÂ\n";
	cout << "\t×ÈÑËÎ\t\t\t\tÊâàäðàò ÷èñëà\n";
	for (i = 1; i <= n; i++)
	{
		cout << "\t" << i << "\t\t\t\t" << pow(i, 2) << "\n";
	}
}