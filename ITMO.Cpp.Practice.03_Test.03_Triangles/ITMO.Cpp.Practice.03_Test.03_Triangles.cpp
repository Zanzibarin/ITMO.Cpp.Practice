#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

float TriSqr(float abc)
{
    float side = abc;
    float semiP = (side * 3) / 2;
    float sqare = sqrt(semiP * (semiP - side) * (semiP - side) * (semiP - side));
    return sqare;
}


float TriSqr(float a, float h)
{
    float base = a;
    float height = h;
    float sqare = (1 * a * h) / 2;
    return sqare;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания" << endl;
    cout << "Задание 3. Работа с различными треугольниками" << endl << endl;
    
    int choise;
    cout << "Выберите площадь какого треугольника вы хотите рассчитать" << endl;
    cout << "1 - для рассчёта площади равностороннего треугольника" << endl;
    cout << "2 - для рассчёта площади разностороннего треугольника" << endl;
    cin >> choise;

    if (choise == 1)
    {
        cout << "01. Нахождение площади равностороннего треугольника" << endl;
        float side;
        cout << "Введите длинну стороны:" << endl;
        cin >> side;
        float EqualSideTriSqrCall = TriSqr(side);
        cout << "Площадь равностороннего треугольника равна " << EqualSideTriSqrCall << endl;
    }
    else if (choise == 2)
    {
        cout << "02. Нахождение площади разностороннего треугольника (через основание и высоту)" << endl;
        float a;
        float h;
        cout << "Введите длинну основания треугольника:" << endl;
        cin >> a;
        cout << "Введите высоту треугольника:" << endl;
        cin >> h;
        float diffSideTriSqrCall = TriSqr(a, h);
        cout << "Площадь равностороннего треугольника равна " << diffSideTriSqrCall << endl;
    }
    else if (choise < 1 || choise > 2)
    {
        cout << "Вы сделали неверный выбор." << endl;
    }
}