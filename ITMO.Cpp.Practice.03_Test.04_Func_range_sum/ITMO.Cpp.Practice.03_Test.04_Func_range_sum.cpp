#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

//int Foo(int n, int a, int s)
//{
//
//	if (a == n)
//	{
//		return n;
//	}
//	else
//	{
//		a = a + s;
//		cout << a << endl;
//		return Foo(n, a, s);
//	}
//
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int a = 0;
//	int s;
//	int n;
//	cout << "Введите верхнюю границу ряда: " << endl;
//	cin >> n;
//	cout << "Введите шаг: " << endl;
//	cin >> s;
//	cout << "-------------------------------------------------------------------" << endl;
//
//	Foo(n, a, s);
//
//	return 0;
//}

int Foo(int s) // s - диапазон(сумма)
{

	if (s == 0)
	{
		return 0;
	}
	else
	{
		return (Foo(s, a));
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0;
	int s;
	int n;
	cout << "Введите верхнюю границу ряда: " << endl;
	cin >> n;
	cout << "Введите шаг: " << endl;
	cin >> s;
	cout << "-------------------------------------------------------------------" << endl;

	Foo(n, a, s);

	return 0;
}