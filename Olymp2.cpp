#include <iostream>
using namespace std;
void main()
{ 
	setlocale(LC_ALL, "rus");
	int a, b, c;
	c = 6;
	srand(unsigned(time(0)));
	a = rand() % 100 + 1;
	cout << "���������� ������� �����, � ��� 6 �������:" << endl;
	while (c != 0)
	{
		cin >> b;
		if (b==a)
		{
			cout << "�� ������� �����!";
			c = c - 6;
		}
		else if ((a < b) and (c!=1))
		{
			cout << "���������� ����� ��������. ������� ��������: "<<c-1<<endl;
		}
		else if ((a > b) and (c!=1))
		{
			cout << "���������� ����� ��������.  ������� ��������: " << c-1 << endl;
		}
		c = c - 1;
		if ((c==0) and (a!=b))
		{
			cout << "� ��� �� ���������� �������� �����";
		}
	}
}