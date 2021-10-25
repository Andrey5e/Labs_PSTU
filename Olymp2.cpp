#include <iostream>
using namespace std;
void main()
{ 
	setlocale(LC_ALL, "rus");
	int a, b, c;
	c = 6;
	srand(unsigned(time(0)));
	a = rand() % 100 + 1;
	cout << "Попробуйте угадать число, у вас 6 попыток:" << endl;
	while (c != 0)
	{
		cin >> b;
		if (b==a)
		{
			cout << "Вы угадали число!";
			c = c - 6;
		}
		else if ((a < b) and (c!=1))
		{
			cout << "Попробуйте число поменьше. Попыток осталось: "<<c-1<<endl;
		}
		else if ((a > b) and (c!=1))
		{
			cout << "Попробуйте число побольше.  Попыток осталось: " << c-1 << endl;
		}
		c = c - 1;
		if ((c==0) and (a!=b))
		{
			cout << "У вас не получилось отгадать число";
		}
	}
}