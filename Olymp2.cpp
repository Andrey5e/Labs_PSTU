#include <iostream>
using namespace std;
void main()
{ 
	setlocale(LC_ALL, "rus");
	int a,b;
	srand(unsigned(time(0)));
	a = rand() % 100 + 1;
	cout << "���������� ������� �����, � ��� 6 �������:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����"<<endl;
	}
	cout << "���������� �����:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����" << endl;
	}cout << "���������� �����:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����" << endl;
	}cout << "���������� �����:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����" << endl;
	}cout << "���������� �����:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����" << endl;
	}cout << "���������� �����:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "�� ������� ���������� �����" << endl;
	}
	else
	{
		cout << "� ��� �� ���������� ������� ���������� ����� �� 6 �������, ���������� �����.";
	}
}