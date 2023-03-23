#include<iostream>
#include<conio.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define LOOPS
//#define Home_W
//#define WHILE_1

enum KEYS
{
	ESC = 27,
	ENTER = 13,
	SPACE = 32,
	arrow_forward = 72,
	arrow_back = 80,
	arrow_left = 75,
	arrow_right = 77,
	W = 87,
	A = 65,
	D = 68,
	S = 83,
	Ц = -106,
	Ы = -101,
	Ф = -108,
	В = -126
};

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
		if(key==-32)
			key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case'w': cout << key << "\t" << "Вперед" << endl; break;
		case'ц': cout << key << "\t" << "Вперед" << endl; break;

		case KEYS::W:cout << key << "\t" << "Бег вперед" << endl; break;
		case KEYS::Ц:cout << key << "\t" << "Бег вперед" << endl; break;

		case's': cout << key << "\t" << "Назад" << endl; break;
		case'ы': cout << key << "\t" << "Назад" << endl; break;

		case KEYS::S: cout << key << "\t" << "Разворот на 180 и по тапкам" << endl; break;
		case KEYS::Ы: cout << key << "\t" << "Разворот на 180 и по тапкам" << endl; break;

		case'a': cout << key << "\t" << "Влево" << endl; break;
		case'ф': cout << key << "\t" << "Влево" << endl; break;

		case KEYS::A: cout << key << "\t" << "Кувырок влево" << endl; break;
		case KEYS::Ф: cout << key << "\t" << "Кувырок влево" << endl; break;

		case'd': cout << key << "\t" << "Вправо" << endl; break;
		case'в': cout << key << "\t" << "Вправо" << endl; break;

		case KEYS::D: cout << key << "\t" << "Кувырок вправо" << endl; break;
		case KEYS::В: cout << key << "\t" << "Кувырок вправо" << endl; break;

		case KEYS::ENTER:cout << KEYS::ENTER << "\t" << "Огонь" << endl; break;
		case KEYS::SPACE:cout << KEYS::SPACE << "\t" << "Прыжок" << endl; break;
	
		case KEYS::arrow_forward:cout << "\t" << "Движение вперед" << endl; break;
		case KEYS::arrow_back:cout << "\t" << "Движение назад" << endl; break;
		case KEYS::arrow_left:cout << "\t" << "Движение влево" << endl; break;
		case KEYS::arrow_right:cout << "\t" << "Движение вправо" << endl; break;
		
			
		case KEYS::ESC:cout << KEYS::ESC<<"\t" << "Выход" << endl; exit(0);

		default:cout << "Error!";
		}

	} while (true);
	
}