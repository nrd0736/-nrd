#include <iostream>
using namespace std;
int main()
{
	int i, n;
	setlocale(LC_ALL, "RUS");
	cout << "Ââåäèòå ÷èñëî ";
	cin >> n;
	cout << "\n\t\t\t\tÒÀÁËÈÖÀ ÓÌÍÎÆÅÍÈß\n";
	cout << "\t\t\t\t-----------------\n";
	for (i = 1; i <= 10; i++)
	{
		cout << "\n" << i << "*" << n << "=" << i * n;
	}
}