#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

void swap(int*, int*);
void swap(int&, int&);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 4. Использование указателей и ссылок" << endl;
    cout << "Упражнение 2. Реализация функции обмена значений" << endl << endl;

    int x = 5, y = 10;

    swap(&x, &y);
    cout << x << " " << y << endl;

    swap(x, y);
    cout << x << " " << y << endl;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}