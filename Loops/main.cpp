#include<iostream>
#include<conio.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define LOOPS
//#define Home_W
//#define WHILE_1

void main()
{
	setlocale(LC_ALL, "");

#ifdef LOOPS

	int i = 0;				//счетчик цикла
	int n;					//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Loops" << endl;
		i++;
	}

#endif // LOOPS

#ifdef Home_W

	int a;
	cout << "Полиндром или нет: ";
	cin >> a;

	int temp = a;
	int z = 0;
	while (temp != 0)
	{
		z = z * 10 + temp % 10;
		temp /= 10;
	}
	if (a == z)
	{
		cout << "Полиндром. УРЯ)))";
	}
	else
	{
		cout << "НЕА(((";
	}

#endif // Home_W

#ifdef WHILE_1

	int number;
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse = 0;

	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;

#endif // WHILE_1

	char key;		//хранит код нажатой клавиши
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;

		switch (key)
		{
		case'w': cout << key << "\t" << "Вперед" << endl; break;
		case's': cout << key << "\t" << "Назад" << endl; break;
		case'a': cout << key << "\t" << "Влево" << endl; break;
		case'd': cout << key << "\t" << "Вправо" << endl; break;
		case'esc':cout << "Выход" << endl; break;					//не работает!!!
		default:cout << "Error!";
		}

	} while (key != 27);


}