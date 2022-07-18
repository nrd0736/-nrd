#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  setlocale(LC_ALL,"RUS");
  double fx,a,b,h,x;
  cout<<"Введите интервал ";
  cin>>a;
  cout<<"\t";
  cin>>b;
  cout<<"\nВведите начальное значение x ";
  cin>>x;
  cout<<"\nВведите шаг ";
  cin>>h;
  cout<<"\n";
  for(a;a<=b;a=a+h)
    {
      fx= pow(pow(tan(log(x)),-1),2);
      x+=h;
      cout<<"\tФункиця равна "<<fx;
    }
}
