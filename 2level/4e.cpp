#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double T, V, ALF;
	cout << "¬ведите скорость тела ";
	cin >> V;
	cout << "\n¬ведите врем€ полЄта тела ";
	cin >> T;
	ALF = asin((9.8*T)/(2*V));
	cout << "”гол броска тела (при ускорении свободного падени€ 9,8) равен " << ALF * 57.3 << " градусов";
	return 0;
}