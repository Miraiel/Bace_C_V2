#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
#define CYCLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef TEMPERATURE

	int temperature;
	cout << "������� ����������� �������: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}

#endif // TEMPERATURE

#ifdef TARGET

	int n;
	cout << "������� �����: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "�� ������: " << endl;
	}
	else
	{
		cout << "�� ������������: " << endl;
	}

#endif // TARGET

	int temperature;
	cout << "������� ����������� �������: ";
	cin >> temperature;
	if (temperature > 60)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if(temperature > 40)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -30)
	{
		cout << "������� �����" << endl;
	}
	else if (temperature > -70)
	{
		cout << "�� �� ���������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
}