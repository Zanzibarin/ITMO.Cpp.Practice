// ITMO.Cpp.Practice.02_Control_Operators_Task.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Упражнение 1. Реализация операторов выбора\n";
    cout << "Задание 1. Определение принадлежности точки заданной фигуре\n\n";

    float x, y;

    cout << "Введите положение точки по оси Х: ";
    cin >> x;
    cout << "Введите положение точки по оси Y: ";
    cin >> y;

    if (x * x + y * y < 9 && y > 0) 
    {
        cout << "Точка расположена внутри фигуры";
    }
    else if (x * x + y * y > 9 || y < 0)
    {
        cout << "Точка расположена вне фигуры";
    }
    else
    {
        cout << "Точка расположена на границе фигуры";
    };
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
