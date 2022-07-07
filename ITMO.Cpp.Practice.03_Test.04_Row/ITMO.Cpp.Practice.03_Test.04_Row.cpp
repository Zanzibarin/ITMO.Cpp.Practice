#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int sumFives(int a);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания" << endl;
    cout << "Задание 4. Рекурсивная функция суммы ряда" << endl << endl;


    int a;
    std::cout << "Укажите число для ряда из сумм числа 5\n";
    std::cin >> a;
    std::cout << sumFives(a);
}

int sumFives(int a)
{
    if (a == 1) return 5;
    else return(a * 5 + sumFives(a - 1));
}
