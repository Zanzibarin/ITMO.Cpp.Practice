#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 5. Работа с массивами" << endl;
    cout << "Упражнение 1. Обработка данных массива" << endl << endl;

    
    const int n = 6;
    double mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    double s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }

    cout << "\nСумма элементов массива = " << s;

    double average(0);
    average = s / n;
    cout << "\nСреднее арифметическое значение = " << average;

    // Рассчёт суммы положительных элементов
    double temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            temp += mas[i];
        }
    }
    cout << "\nСумма положительных элементов массива = " << temp;

    // Рассчёт суммы отрицательных элементов
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            temp += mas[i];
        }
    }
    cout << "\nСумма отрицательных элементов массива = " << temp;


    //Нахождение суммы элементов с нечётными индексами
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            temp += mas[i];
        }
    }
    cout << "\nСумма элементов с нечётными индексами = " << temp;


    //Нахождение суммы элементов с чётными индексами
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            temp += mas[i];
        }
    }
    cout << "\nСумма элементов с чётными индексами = " << temp;


    //Найти минимальный элемент массива и вывести и индекс
    double min = mas[0];
    int index = 0;
    int indexMin = 0;
    int indexMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
            indexMin = index;
        }

    }
    cout << "\nМинимальное значение в массиве " << min << ", индекс значения = " << index;


    //Найти максимальный элемент массива и вывести и индекс
    double max = mas[0];
    index = 0;

    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index = i;
            indexMax = index;
        }
    }
    cout << "\nМаксимальное значение в массиве = " << max << ", индекс значения =" << index;


    //Рассчёт произведения элементов массива, расположенных между максимальным и минимальным элементами
    double multi = 1;
    for (int i = indexMin + 1; i < indexMax; i++)
    {
        multi = multi * mas[i];
    }
    cout << "\nПроизведение элементов массива между минимальным и максимальным элементами = " << multi;
}

