#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int converter(int a);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания" << endl;
    cout << "Задание 5. Применение рекурсии для перевода целого числа в двоичный код" << endl << endl;

    int a;
    std::cout << "Введите число для конвертации из десятичной системы в двоичную\n";
    std::cin >> a;
    converter(a);

}

int converter(int a)
{
    int remainder(0);
    if (a == 2)
    {
        std::cout << a;
        return a;
    }
    else
    {
        converter(a / 2);
        std::cout << a % 2;
        return a;
    }
}
