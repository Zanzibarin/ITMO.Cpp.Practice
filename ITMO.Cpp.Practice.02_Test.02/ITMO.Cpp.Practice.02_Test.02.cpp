// ITMO.Cpp.Practice.02_Test.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 2. Определение наибольшего из трех чисел\n";

    int a, b, c;
    cout << "Введите числа для сравнения.\n";
    cout << "Введите 1-е число: ";
    cin >> a;
    cout << "Введите 2-е число: ";
    cin >> b;
    cout << "Введите 3-е число: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "Наибольшим числом является: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Наибольшим числом является: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "Наибольшим числом является: " << c << endl;
    }
    else
    {
        cout << "Числа равны." << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
