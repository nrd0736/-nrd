#include<iostream>
using namespace std;

class Sample {
	int x;
public:
	Sample(int x) { i = x; }
	int i;
};

int main()
{
	Sample ts(10);
	cout << ts.i;
}