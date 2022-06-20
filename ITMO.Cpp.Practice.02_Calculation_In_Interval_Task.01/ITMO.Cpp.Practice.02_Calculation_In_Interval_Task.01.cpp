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

    int k;
    int m;
    int s = 0;

    cout << "Введите нижнюю границу интервала: ";
    cin >> k;
    cout << "Введите верхнюю границу интервала: ";
    cin >> m;
    
    for (int i = 1; i <= 100; i++)
    {
        if ((i > k) && (i < m))
            continue;
        s = s + i;       
    }
    cout << "Сумма чисел до указанного интервала = " << s;
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
