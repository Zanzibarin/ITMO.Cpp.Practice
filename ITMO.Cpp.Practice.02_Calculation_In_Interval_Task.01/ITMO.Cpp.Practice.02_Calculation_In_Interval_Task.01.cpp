// ITMO.Cpp.Practice.02_Calculation_In_Interval_Task.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Упражнение 4. Расчет суммы чисел на заданном интервале\n";
    /*int a, b;  // два целых числа, начало и конец интервала
    int s; // сумма 

    s = 1;

    cout << "Введите начало интервала: ";
    cin >> a;

    cout << "Введите конец интервала: ";
    cin >> b;

    for (int i = a; i < b; i++)
        s += i;
        cout << "Сумма = " << s;
        return 0;*/

    cout << "\nРассчёт суммы чисел на интервале от 1 до указанного предела.\n";
    int k;
    int s = 1;
    cout << "Введите верхнее значение интервала: ";
    cin >> k;

    cout << "\nРассчёт суммы чисел на интервале от указанного нижнего предела до 100.\n";
    int m = 100;
    int x;
    cout << "Введите нижнее значение интервала: ";
    cin >> x;
    
    cout << "\n";

    for (int i = 1; i <= k; i++) 
        s += i;
        cout << "Сумма чисел до указанного интервала = " << s - 1 << endl;
        
        for (int i = x; i <= 100; i++)
            x += i;
            cout << "\nСумма чисел от указанного интервала до 100 = " << x << endl;
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
