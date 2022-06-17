﻿// ITMO.Cpp.Practice.01_Input_Output_Task.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Расчет площади равностороннего треугольника по формуле Герона\n\n";
    
    float abc, p, S;

    cout << "Укажите сторону треугольника: ";
    cin >> abc;

    p = (abc * 3) / 2;

    S = sqrt(p * (p - abc) * (p - abc) * (p - abc));

    cout << "\n";

    cout.precision(3);
    cout << "Сторна\t" << "Площадь" << endl;
    cout << abc << "\t" << S << endl;


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
