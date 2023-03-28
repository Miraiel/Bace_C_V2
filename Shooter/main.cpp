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
	� = -106,
	� = -101,
	� = -108,
	� = -126
};

void main()
{
	char key;		//������ ��� ������� �������
	do
	{
		key = _getch();
		if (key == -32)
			key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case'w':case'�': cout << key << "\t" << "������" << endl; break;
		case KEYS::W:case KEYS::�:cout << key << "\t" << "��� ������" << endl; break;

		case's':case'�': cout << key << "\t" << "�����" << endl; break;
		case KEYS::S:case KEYS::�:cout << key << "\t" << "�������� �� 180 � �� ������" << endl; break;

		case'a':case'�': cout << key << "\t" << "�����" << endl; break;
		case KEYS::A:case KEYS::�: cout << key << "\t" << "������� �����" << endl; break;

		case'd':case'�': cout << key << "\t" << "������" << endl; break;
		case KEYS::D:case KEYS::�: cout << key << "\t" << "������� ������" << endl; break;

		case KEYS::ENTER:cout << KEYS::ENTER <<  "\t" << "�����" << endl; break;
		case KEYS::SPACE:cout << KEYS::SPACE << "\t" << "������" << endl; break;

		case KEYS::ARROW_FORWARD:cout << KEYS::ARROW_FORWARD << "\t" << "�������� ������" << endl; break;
		case KEYS::ARROW_BACK:cout << KEYS::ARROW_BACK << "\t" << "�������� �����" << endl; break;
		case KEYS::ARROW_LEFT:cout << KEYS::ARROW_LEFT << "\t" << "�������� �����" << endl; break;
		case KEYS::ARROW_RIGHT:cout << KEYS::ARROW_RIGHT << "\t" << "�������� ������" << endl; break;

		case KEYS::ESC:cout << KEYS::ESC << "\t" << "�����" << endl; exit(0);

		default:cout << "Error!";
		}

	} while (true);

}