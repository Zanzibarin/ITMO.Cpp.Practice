// ITMO.Cpp.Practice.01_Input_Output_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Нахождение площади пятиугольника по методу \"шнуровки\" Гаусса\n\n";

    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    cout << "Введите точки для сетки координат по оси X/Y\n\n";

    cout << "Введите координаты 1-й точки\n";
    cout << "Введите значение по оси x: ";
    cin >> x1;
    cout << "Введите значение по оси y: ";
    cin >> y1;
    cout << "\n";
    cout << "Введите координаты 2-й точки\n";
    cout << "Введите значение по оси x: ";
    cin >> x2;
    cout << "Введите значение по оси y: ";
    cin >> y2;
    cout << "\n";
    cout << "Введите координаты 3-й точки\n";
    cout << "Введите значение по оси x: ";
    cin >> x3;
    cout << "Введите значение по оси y: ";
    cin >> y3;
    cout << "\n";
    cout << "Введите координаты 4-й точки\n";
    cout << "Введите значение по оси x: ";
    cin >> x4;
    cout << "Введите значение по оси y: ";
    cin >> y4;
    cout << "\n";
    cout << "Введите координаты 5-й точки\n";
    cout << "Введите значение по оси x: ";
    cin >> x5;
    cout << "Введите значение по оси y: ";
    cin >> y5;

    float rez = abs((((x1 * y2) + (x2 * y3) + (x3 * y4) + (x4 * y5) + (x5 * y1)) - ((y1 * x2) + (y2 * x3) + (y3 * x4) + (y4 * x5) + (y5 * x1))) / 2);

    cout << "\nСчитаем\n";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << "\nПлощадь пятиугольника равна: " << rez << "\n\n";
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
