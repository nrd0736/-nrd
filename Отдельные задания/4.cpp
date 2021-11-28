#include<iostream>
#include<cmath>
using namespace std;
double grad(int ax, int ay, int bx, int by);
int main()
{
	int ax, ay, bx, by, cx, cy, ab=0, bc=0, ca=0;
	setlocale(LC_ALL, "RUS");
	cout << "\n¬ведите координаты x и y первой точки\n";
	cin >> ax >> ay;
	cout << "\n¬ведите координаты x и y второй точки\n";
	cin >> bx >> by;
	cout << "\n¬ведите координаты x и y третьей точки\n";
	cin >> cx >> cy;
	if (grad(ax, ay, bx, by) > 0)ab++;
	if (grad(bx, by, cx, cy) > 0)bc++;
	if (grad(cx, cy, ax, ay) > 0)ca++;
	if (ab && bc && ca != 0) cout << "\n“реугольник может быть построен на данных вершинах ";
	else cout << "\n“реугольник не может быть построен на данных вершинах ";
}
	double grad(int ax, int ay, int bx, int by)
	{
		double gr;
		gr = round(acos((ax * bx + ay + by) / (sqrt(pow(ax, 2) + pow(ay, 2)) * sqrt((pow(bx, 2) + pow(by, 2))))) * 57.3);

		return gr;
	}
