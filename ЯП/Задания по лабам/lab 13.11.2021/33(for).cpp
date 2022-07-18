#include<iostream>
using namespace std;
int main()
{
int n,i;
setlocale(LC_ALL,"RUS");
cout<<"Введите номер крайнего элемента менее 1000\n";
cin>>n;
int fi[1000];
fi[1]=1;
fi[2]=2;
cout<<fi[1]<<"\n"<<fi[1]<<"\n";
for(i=3;i<=n;i++)
{
 fi[i]=fi[i-2]+fi[i-1];
 cout<<fi[i]<<"\n";


}
}

