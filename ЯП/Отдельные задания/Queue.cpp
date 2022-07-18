#include <iostream>
using namespace std;
const int maxQsize = 100;

class Queue {
	char q[maxQsize];
	int I[maxQsize];
	double D[maxQsize];
	int size;
	int putloc, getloc;
	int p1;
	double p2;
public:
	Queue(int len) {
		if (len > maxQsize) len = maxQsize;
		else if (len <= 0) len = 1;

		size = len;
		putloc = getloc = 0;
	}
	void putCH(char ch) {
		if (putloc == size) {
			cout << "-- ������ �����.\n";
			return;
		}
		putloc++;
		q[putloc] = ch;
	}
	char getCH() {
		if (getloc == putloc) {
			cout << "--������� �����.\n";
			return 0;
		}
		getloc++;
		return q[getloc];
	}
	void putI(int p1) {
		if (putloc == size) {
			cout << "-- ������ �����.\n";
			return;
		}
		putloc++;
		I[putloc] = p1;
	}
	int getI() {
		if (getloc == putloc) {
			cout << "--������� �����.\n";
			return 0;
		}
		getloc++;
		return I[getloc];
	}
	void putD(double p2) {
		if (putloc == size) {
			cout << "-- ������ �����.\n";
			return;
		}
		putloc++;
		D[putloc] = p2;
	}
	double getD() {
		if (getloc == putloc) {
			cout << "--������� �����.\n";
			return 0;
		}
		getloc++;
		return D[getloc];
	}
};
int main()
{
	setlocale(LC_ALL, "RUS");
	Queue bigQch(100);
	Queue bigQin(100);
	Queue bigQd(100);
	double d,r;
	int i,ia;
	char ch;
	cout << "���������� bigQch ��� �������� ���������� ��������\n";
	for (i = 0; i < 26; i++)
		bigQch.putCH('a' + i);
	cout << "���������� ������� bigQch:\n";
		for (i = 0; i <26; i++) {
			ch = bigQch.getCH();
			if(ch!=0) cout << ch << "\t";
		}

		cout << "\n���������� bigQin ��� �������� ������ �����\n";
		for (i = 0; i < 26; i++)
			bigQin.putI(62 + i*2);
		cout << "\n���������� ������� bigQin:\n";
		for (i = 0; i < 26; i++) {
			ia = bigQin.getI();
			if (ia != 0) cout << ia << "\t";
		}

		cout << "\n���������� bigQD ��� �������� ������ ������\n";
		for (i = 0; i < 26; i++)
		{
			r = i / 3.14;
			bigQd.putD(r);
		}
		cout << "\n���������� ������� bigQi:\n";
		for (i = 0; i < 26; i++) {
			d = bigQd.getD();
			if (d != 0) cout << d << "\t";
		}
}
