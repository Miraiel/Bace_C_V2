#include<iostream>
#include<conio.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

enum KEYS
{
	ESC = 27,
	ENTER = 13,
	SPACE = 32,
	ARROW_FORWARD = 72,
	ARROW_BACK = 80,
	ARROW_LEFT = 75,
	ARROW_RIGHT = 77,
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
	char key;		//хранит код нажатой клавиши
	do
	{
		key = _getch();
		if (key == -32)
			key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case'w':case'ц': cout << key << "\t" << "Вперед" << endl; break;
		case KEYS::W:case KEYS::Ц:cout << key << "\t" << "Бег вперед" << endl; break;

		case's':case'ы': cout << key << "\t" << "Назад" << endl; break;
		case KEYS::S:case KEYS::Ы:cout << key << "\t" << "Разворот на 180 и по тапкам" << endl; break;

		case'a':case'ф': cout << key << "\t" << "Влево" << endl; break;
		case KEYS::A:case KEYS::Ф: cout << key << "\t" << "Кувырок влево" << endl; break;

		case'd':case'в': cout << key << "\t" << "Вправо" << endl; break;
		case KEYS::D:case KEYS::В: cout << key << "\t" << "Кувырок вправо" << endl; break;

		case KEYS::ENTER:cout << KEYS::ENTER <<  "\t" << "Огонь" << endl; break;
		case KEYS::SPACE:cout << KEYS::SPACE << "\t" << "Прыжок" << endl; break;

		case KEYS::ARROW_FORWARD:cout << KEYS::ARROW_FORWARD << "\t" << "Движение вперед" << endl; break;
		case KEYS::ARROW_BACK:cout << KEYS::ARROW_BACK << "\t" << "Движение назад" << endl; break;
		case KEYS::ARROW_LEFT:cout << KEYS::ARROW_LEFT << "\t" << "Движение влево" << endl; break;
		case KEYS::ARROW_RIGHT:cout << KEYS::ARROW_RIGHT << "\t" << "Движение вправо" << endl; break;

		case KEYS::ESC:cout << KEYS::ESC << "\t" << "Выход" << endl; exit(0);

		default:cout << "Error!";
		}

	} while (true);

}