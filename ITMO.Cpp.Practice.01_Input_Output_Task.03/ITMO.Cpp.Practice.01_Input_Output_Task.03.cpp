// ITMO.Cpp.Practice.01_Input_Output_Task.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Расчет площади треугольника ABC по формуле Герона\n\n";
    
    float a, b, c;
    
    cout << "Введите длинну стороны AB: ";
    cin >> a;
    cout << "Введите длинну стороны BC: ";
    cin >> b;
    cout << "Введите длинну стороны CA: ";
    cin >> c;

    float p = (a + b + c) / 2;
    float Sqr = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "\n";

    //cout << "Сторна AB |" << " Сторна BC |" << " Сторна CD |" << " Площадь\n";
    //cout << a << "           " << b << "           " << c << "           " << floor(Sqr * 100) / 100 << "\n";

    cout << "Сторна AB\t" << "Сторна BC\t" << "Сторна CA\t" << "Площадь\t" << endl;
    cout << a << "\t\t" << b << "\t\t" << c << "\t\t" << floor(Sqr * 100) / 100 << endl;


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
