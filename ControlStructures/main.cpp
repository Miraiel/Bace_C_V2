#include<iostream>
using namespace std;

//#define TEMPERATURE

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

}