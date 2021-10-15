#include<iostream>
using namespace std;
int main()
{
double k[3],o1,o2,sch=0;
int i;
  setlocale(LC_ALL,"RUS");
  cout<<"Введите параметры кирпича (ширина,высота,длина) ";
  for (i=0;i<3;i++) {cin>>k[i];cout<<"\n";}
  cout<<"Введите параметры отверстия (ширина,высота)" ;
  cin>>o1;
  cout<<"\t";
  cin>>o2;

  for (i=0;i<3;i++)
  {
    if (k[i]==o1) sch++;
  }

  for (i=0;i<3;i++)
  {
    if (k[i]==o2) sch++;
  }
  cout<<"\n\t"<<sch;
  if (sch>=2)
  cout<<"\nКирпич поместится";
  else
  cout<<"\nКирпич не поместится";

  return 0;
}
