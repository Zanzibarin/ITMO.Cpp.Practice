#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

// Начальная итерация функции, для расчёта площади равностороннего треугольника
float triangle(float a, float b, float c, float d)
{
    float side = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    float semiP = (side * 3) / 2;
    float Sqare = sqrt(semiP * (semiP - side) * (semiP - side) * (semiP - side));
    return Sqare;
}
// Перегрузка функции. Теперь в ней рассчитывается площадь комплексной фигуры из трёх треугольников
float triangle(float s)
{
    float totalSqare = s * 3;
    return totalSqare;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания" << endl;
    cout << "Задание 1. Расчет площади сложной фигуры" << endl;

    float x1, y1, x2, y2; // Переменные для указания точек на сетке координат по оси XY

    cout << "Введите координаты 1-й точки на плоскости:" << endl;
    cin >> x1;
    cin >> y1;
    cout << "Введите координаты 2-й точки на плоскости:" << endl;
    cin >> x2;
    cin >> y2;

    float triSide = triangle(x1, y1, x2, y2);
    float firureSqr = triangle(triSide);

    cout << "Площадь фигуры из трёх равносторонних треугольников равна " << firureSqr << endl;
}
