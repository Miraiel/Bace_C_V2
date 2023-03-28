#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int number;
	cout << "Введите число: "; cin >> number;

	int summ_1 = 0, summ_2 = 0;

	while (number > 1000)
	{
		summ_1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		summ_2 += number % 10;
		number /= 10;
	}
	cout << summ_1 << endl;
	cout << summ_2 << endl;

	if (summ_1 = summ_2)
	{
		cout << "Счастливый билет!" << endl;
	}
	else 
	{
		cout << "НЕ счастливый билет!" << endl;
	}

}