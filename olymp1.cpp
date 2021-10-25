#include <iostream>
#include <algorithm>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a,b,c,d,e, num1, num2, num3, num4, num5, num6;
	cout << "Введите значение от 100 до 999:"<<endl;
	cin >> a;
	cout << endl;
	b = a % 10;
	c = (a / 10) % 10;
	d = ((a / 10) / 10) % 10;
	if ((a / 1000 == 0) && (b != c) && (b != d) && (c != d))
	{
		cout << "Все комбинации цифр:" << endl;
		cout << b << c << d << endl;
		cout << b << d << c << endl;
		cout << d << c << b << endl;
		cout << d << b << c << endl;
		cout << c << b << d << endl;
		cout << c << d << b << endl<<endl;
		num1 = b * 100 + c * 10 + d;
		num2 = b * 100 + d * 10 + c;
		num3 = d * 100 + c * 10 + b;
		num4 = d * 100 + b * 10 + c;
		num5 = c * 100 + b * 10 + d;
		num6 = c * 100 + d * 10 + b;
		cout << "Максимальное из комбинаций" << endl;
		cout<<max(max(max(max(max(num1, num2), num3), num4), num5), num6);
	}
}