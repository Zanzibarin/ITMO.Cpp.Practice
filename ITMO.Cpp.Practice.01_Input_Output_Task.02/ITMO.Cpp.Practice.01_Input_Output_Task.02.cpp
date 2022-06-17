// ITMO.Cpp.Practice.01_Input_Output_Task.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    //Упражнение 2. Преобразование типов данных
    system("chcp 1251");

    double x;
    //int x;
    double a, b;

    cout << "\nВведите a и b:\n";
    cin >> a; // ввод с клавиатуры значения a
    cin >> b; // ввод с клавиатуры значения b
    x = a / b; // вычисление значения x
    cout.precision(3);
    cout << "\nx = " << x << endl; //вывод результата на экран
    cout << sizeof(a / b) << ends << sizeof(x) << endl; //расчет объема занимаемой памяти
    return 0;
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
