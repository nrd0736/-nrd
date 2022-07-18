#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,i,s1=0,s2=0;
setlocale(LC_ALL,"RUS");
for (i=0;;i++)
{
    cin>>a;
    if (a==0) break;
    else if (a<0) s2+=a;
    else if (a>0) s1+=a;
}
cout<<"\nСумма положительных = "<<s1<<"\nСумма отрицательных = "<<s2;

}
