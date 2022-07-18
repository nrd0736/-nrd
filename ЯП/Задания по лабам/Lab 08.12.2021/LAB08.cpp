#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int cr = 0;
    setlocale(LC_ALL, "RUS");
    char buff[2000];

    ifstream fin("wiki.txt");
    for (int i = 0; i < 2000; i++)
    {
        fin >> buff;
        for (int j = 0; j < 2000; j++)
        {
            if (toupper(buff[j]) == 'V' && toupper(buff[j + 1]) == 'P' && toupper(buff[j + 2]) == 'N')
                cr++;
        }
    }
    cout << "\n" << cr;
}
