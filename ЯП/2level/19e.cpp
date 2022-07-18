#include<iostream>
using namespace std;
int main()
{
  setlocale(LC_ALL,"RUS");
  int a,b=0;
  cout<<"Введите 5-ти значное число ";
  cin>>a;
  b=((a%10)*10000)+(((a/10)-((a/100)*10))*1000)+(((a/100)-((a/1000)*10))*100)+(((a/1000)-((a/10000)*10))*10)+(a/10000);
  if (a==b) cout<<"\nЭто число полиндром";
  else cout<<"\nЭто число не полиндром";
}
