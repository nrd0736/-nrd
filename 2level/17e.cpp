#include<iostream>
using namespace std;
int main()
{
  setlocale(LC_ALL,"RUS");
  int mn[10],i,n;
  cout<<"Введите цифры ";
  for (i=0;i<=10;i++) cin>>mn[i];
  cout<<"\nВведите порядковый номер цифры ";
  cin>>n;
  cout<<"Цифра с номером "<<n<<" равна "<<mn[n-1];
}
