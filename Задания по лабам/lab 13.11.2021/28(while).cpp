#include<iostream>
using namespace std;
int main()
{
int i;
double e, A[1000];
setlocale(LC_ALL,"RUS");
cout<<"Введите число больше 0 (целое)\n";
cin>>e;
A[1]=2;
for (i=2;;i++)
{
A[i]=2+(1/A[i-1]);
if((A[i]-A[i-1])<e)
{
cout<<"Коэффицент K="<<i<<" А(K-1) и A(K) "<<A[i-1]<<"  "<<A[i];
break;
}
}

}
