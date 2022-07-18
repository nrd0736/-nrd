#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int ch, b = 0;
	cout << "Вам предалагается пройти тест\nКак назывался ядерный реактор на ЧАЭС?\n";
	cout << "1. РБМК 1000\n2. РЧАЭС-86\n3. Толстяк\n4. НСЧ 568\n";
	cin >> ch;
			switch (ch)
			{
			case(1): b++; cout << "\nВаш ответ: РБМК 1000"; break; 
			case(2): cout << "\nВаш ответ: РЧАЭС-86"; break; 
			case(3):cout << "\nВаш ответ: Толстяк"; break;
			case(4):cout << "\nВаш ответ: НСЧ 568"; break;
			}
	cout << "\nВ каком году случилась катастрофа на Чернобыльской АЭС\n";
	cout << "\n1. 1987\n2. 1991\n3. 1986\n4. 1979\n";
	cin >> ch;
		switch (ch)
		{
		case(1):cout << "\nВаш ответ: 1987"; break;
		case(2):cout << "\nВаш ответ: 1991"; break;
		case(3):b++; cout << "\nВаш ответ: 1986"; break;
		case(4):cout << "\nВаш ответ: 1979"; break;
		}
	cout << "\nСколько работников ЧАЭС пожертвовали свои жизни для предотвращения теплового взрыва после аварии\n";
	cout << "\n1. 2\n2. 15\n3. 4\n4. 56\n";
	cin >> ch;
		switch (ch)
		{
		case(1):cout << "\nВаш ответ: 2\n"; break;
		case(2):cout << "\nВаш ответ: 15\n"; break;
		case(3):b++; cout << "\nВаш ответ: 4\n"; break;
		case(4):cout << "\nВаш ответ: 56\n"; break;
		}
			if (b == 0) cout << "\nВаша оценка: 2";
			if (b == 1) cout << "\nВаша оценка: 3";
			if (b == 2) cout << "\nВаша оценка: 4";
			if (b == 3) cout << "\nВаша оценка: 5";

			return 0;

}