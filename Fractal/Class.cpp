#include <iostream>
#include <conio.h>
using namespace std;

int function(long int N)
{
	if (N == 0)
	{
		return 0;
	}

	if (N == 1)
	{
		return 1;
	}

	return N * function(N - 1);
}

int main()
{
	setlocale(LC_ALL, "rus");
	long int a; cout << "Введите число для возведение в факториал: "; cin >> a;
	cout << "Число возведённое в факториал: " << function(a) << endl;
	system("pause");
	_getch();
}
