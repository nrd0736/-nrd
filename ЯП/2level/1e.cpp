#include<iostream>
#include<cmath>
using namespace std;
double Y;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, i=0;
	double X,Xk,A, B, Z,Betta;
	cout << "������� ����������� �����: ";
	cin >> Xk;
	cout << "\n";
	for (i = 0; i < Xk; i++)
	{
		cout << "������� �������� Z,B,A ��� X" << i+1 << "\n";
		cout << "Z = ";
		cin >> Z;
		cout << "\n";
		cout << "B = ";
		cin >> B;
		cout << "\n";
		cout << "A = "; 
		cin >> A;
		cout << "\n";
		cout << "Betta = ";
		cin >> Betta;
		cout << "\n";
		X = pow(Z, 3) - B + (pow(A, 2) / (tan(pow(Betta, 2))));
		Y += X;
		X = 0;
	}
	cout << "� =" << Y;
	return 0;
}