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
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}

#endif // TEMPERATURE

#ifdef TARGET

	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Вы попали: " << endl;
	}
	else
	{
		cout << "Вы промахнулись: " << endl;
	}

#endif // TARGET

	int temperature;
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if(temperature > 40)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Жара" << endl;
	}
	else if (temperature > 15)
	{
		cout << "На улице тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "Сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "Вы за заполярным кругом" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}