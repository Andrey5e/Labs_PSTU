#include <iostream>
using namespace std;
void main()
{ 
	setlocale(LC_ALL, "rus");
	int a,b;
	srand(unsigned(time(0)));
	a = rand() % 100 + 1;
	cout << "Попробуйте угадать число, у вас 6 попыток:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число"<<endl;
	}
	cout << "Попробуйте снова:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число" << endl;
	}cout << "Попробуйте снова:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число" << endl;
	}cout << "Попробуйте снова:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число" << endl;
	}cout << "Попробуйте снова:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число" << endl;
	}cout << "Попробуйте снова:" << endl;
	cin >> b;
	if (b == a)
	{
		cout << "Вы угадали загаданное число" << endl;
	}
	else
	{
		cout << "У вас не получилось угадать загаданное число за 6 попыток, попробуйте снова.";
	}
}