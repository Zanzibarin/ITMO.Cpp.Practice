// ITMO.Cpp.Practice.02_Cicles_Task.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Упражнение 2. Использование циклов при реализации алгоритмов\n";
    cout << "Задание 1. Использование цикла с постусловием\n";

    double x, x1, x2, y;

    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;

    cout << "\tx\tsin(x)\n";

    x = x1;

    /*do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } 
    while (x <= x2);*/

    //Реализация задачи с помощью цикла с предусловием в рамках выполнения задания 3
    while (x <= x2)
    {
        y = sin(x); 
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
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
