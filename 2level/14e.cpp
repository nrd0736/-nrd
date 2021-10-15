#include <iostream>
using namespace std;
int main()
{
  setlocale(LC_ALL,"RUS");
  char text[]="Там ревели горы мама\nЗачем пацан\nСияет слиток из синтетики\nВсё идёт по плану#";
  int c1=0,st1=0;
  while (text[c1]!='#')
  {
    if (text[c1]=='\n') st1++;
    c1++;
  }
  cout<<"Колличество строк "<<++st1;

  return 0;
}
