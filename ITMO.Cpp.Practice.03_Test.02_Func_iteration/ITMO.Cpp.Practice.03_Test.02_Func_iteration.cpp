#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <complex>
#include <valarray>

using namespace std;

float cubeRootPow(float x)
{
    return pow(x, 1.0 / 3.0);
}

double cubeRootIter(int x, double y)
{
    double val{ 0.5 * (y + 3 * x / (2 * y * y + x / y)) };
    if (((val - y) < 0 ? -(val - y) : val - y) < 1e-5)
        return val;
    else
        return cubeRootIter(x, val);
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания" << endl;
    cout << "Задание 2. Применение итерации реализации функции" << endl << endl;
    cout << "01. Нахождение кубического корня с помощью функции pow" << endl;
    float x;
    cout << "Введите число, кубический корень которого желаете найти через pow:" << endl;
    cin >> x;

    float cubeRootPowCall = cubeRootPow(x);

    cout << "Кубический корень числа " << x << " равен " << cubeRootPowCall << endl << endl;

    cout << "02. Нахождение кубического корня с помощью итерационной формулы" << endl;
    int y{ 0 };
    cout << "Введите число, кубический корень которого желаете найти через итерационную формулу:" << endl;
    cin >> y;
    cout << "Кубический корень числа " << y << " равен " << static_cast<int>(cubeRootIter(y, y)) << '\n';
    return 0;
}
