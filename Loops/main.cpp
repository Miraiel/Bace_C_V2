#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define LOOPS

void main()
{
	setlocale(LC_ALL, "");

#ifdef LOOPS

	int i = 0;				//������� �����
	int n;					//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << "Loops" << endl;
		i++;
	}

#endif // LOOPS

	int a;
	cout << "��������� ��� ���: ";
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
		cout << "���������. ���)))";
	}
	else
	{
		cout << "���(((";
	}
}