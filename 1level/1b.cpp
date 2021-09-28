#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, i, v, d = 10;
    cout << "¬ведите  п€тизначное число число" << "\n";
    cin >> a;
    for (i = 1; i <= 5; i++)
    {
        v = a % d;
        if (v > 10)
        {
            v = v / (d / 10);
        }
        cout << i << " число равно " << v << "\n";
        d *= 10;
    }

}