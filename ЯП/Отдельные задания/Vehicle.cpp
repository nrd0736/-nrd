#include <iostream>
using namespace std;

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
};
int main()
{
	setlocale(LC_ALL, "Rus");
	Vehicle minivan;
	int range;
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;
	range = minivan.fuelcap * minivan.mpg;
	cout << "������� ����� ���������������� " << minivan.passengers << " ���������� �� ���������� " << range;
	return 0;
}