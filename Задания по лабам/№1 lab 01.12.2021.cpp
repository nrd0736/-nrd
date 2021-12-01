#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x=3;
double sum=0;
setlocale(LC_ALL,"RUS");
for(int i=1;i<=45;i++)
{
sum=(double)((((3*i)/4)+1)*pow(x,i-1));


}
cout<<"Значение равно "<<sum;
return 0;
}
