#include<iostream>
#include "stdafx.h"
using namespace std;
int main()
{
  int ad;
  setlocale(LC_ALL,"RUS");
  cout<<"Введите число ";
  cin>>ad;
  cout<<"\nЧисло равно "<<ad<<endl<<hex<<ad;;

}
