#include<iostream>
using namespace std;

//#define INCREMENT_DECREMENT	// ��������� � ���������
//#define COPOUND_ASIIGMENTS	// ��������� ������������
//#define COMPERISON_OPERATOR		// ��������� ���������

void main()
{
	setlocale(0, "rus");

#ifdef INCREMENT_DECREMENT

	int i = 0;
	++i;
	i++;
	--i;
	i--;
	cout << i << endl;

	int j = i++;
	cout << i << j << endl;

	int j = ++i;
	cout << i << j << endl;

#endif // INCREMENT_DECREMENT

#ifdef COPOUND_ASIIGMENTS

	int a = 2;
	int b = 3;
	a += b;		//a = a + b;
	a -= b;		//a = a - b;
	a *= b;		//a = a * b;
	a /= b;		//a = a / b;
	a %= b;		//a = a % b;

#endif // COPOUND_ASIIGMENTS

#ifdef COMPERISON_OPERATOR

	cout << true << endl;
	cout << !true << endl;
	cout << (!true == false) << endl;

	cout << (false || false || false) << endl;
	cout << (true || false || false) << endl;
	cout << (false && true && true) << endl;
	cout << (true && true && false) << endl;
	cout << (true && true && true) << endl;

#endif // COMPERISON_OPERATOR

}