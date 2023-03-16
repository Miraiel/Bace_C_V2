#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;


//#define CALC_IF
#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");

#ifdef CALC_IF


	//cout<<"Calc"<<endl;

	double a, b;			//числа вводимые с клавиатуры
	char s;					//Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";

	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}

#endif // CALC_IF

#ifdef CALC_SWITCH

	double a, b;
	char z;
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> z >> b;
	
	switch (z)
	{
		case '+': cout << a << "+" << b << "=" << a + b << endl; break;
		case '-': cout << a << "-" << b << "=" << a - b << endl; break;
		case '*': cout << a << "*" << b << "=" << a * b << endl; break;
		case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	
		default:	cout << "Error: No operation" << endl;
	}
	#endif // CALC_SWITCH

}