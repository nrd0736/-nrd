#include<iostream>
#include<cmath>
using namespace std;
double grad(int ax, int ay, int bx, int by);
int main()
{
	int ax, ay, bx, by, cx, cy, ab=0, bc=0, ca=0;
	setlocale(LC_ALL, "RUS");
	cout << "\n������� ���������� x � y ������ �����\n";
	cin >> ax >> ay;
	cout << "\n������� ���������� x � y ������ �����\n";
	cin >> bx >> by;
	cout << "\n������� ���������� x � y ������� �����\n";
	cin >> cx >> cy;
	if (grad(ax, ay, bx, by) > 0)ab++;
	if (grad(bx, by, cx, cy) > 0)bc++;
	if (grad(cx, cy, ax, ay) > 0)ca++;
	if (ab && bc && ca != 0) cout << "\n����������� ����� ���� �������� �� ������ �������� ";
	else cout << "\n����������� �� ����� ���� �������� �� ������ �������� ";
}
	double grad(int ax, int ay, int bx, int by)
	{
		double gr;
		gr = round(acos((ax * bx + ay + by) / (sqrt(pow(ax, 2) + pow(ay, 2)) * sqrt((pow(bx, 2) + pow(by, 2))))) * 57.3);

		return gr;
	}
