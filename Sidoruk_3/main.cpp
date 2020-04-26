#include <iostream>
#include <iomanip>

using namespace std;

double y(double x)
{
	double t = x * x - log(1 + x) - 3;
	return t;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double x1, x2;
	cout << "Введите первый конец отрезка: ";
	cin >> x1;

	cout << "Введите второй конец отрезка: ";
	cin >> x2;
	
	double y1 = y(x1);
	double y2 = y(x2);

	if (y1 * y2 < 0)
	{
		cout << "Корень на отрезке" << endl;
	}
	else
	{
		cout << "Корень вне отрезка" << endl;;
	}

	system("pause");

	return 0;
}
