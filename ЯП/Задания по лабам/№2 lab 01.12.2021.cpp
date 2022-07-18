#include <iostream>
#include <cmath>
using namespace std;
int main()
{
setlocale(LC_ALL,"RUS");
int i=0,sr=0,a,count=0;
for (i=0;;count++)
{
cin>>a;
if (a>0)
{
sr+=a;
}
else
break;
}
cout<<"\n Значение равно "<<(double)(sr/count);
}
