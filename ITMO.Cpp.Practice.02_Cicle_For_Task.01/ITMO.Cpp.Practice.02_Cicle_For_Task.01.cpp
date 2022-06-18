// ITMO.Cpp.Practice.02_Cicle_For_Task.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    cout << "Упражнение 3. Применение цикла с параметром (for) для итерации\n";

    int a, b, c; // a - первый множитель, b - второй множитель, c - результат умножения (произведение)
    int k = 0, n = 10; // k - неправильные ответы, n - вопросы
    for (int i = 1; i <= n; i++) 
    {
        // инициализация операндов случайными числами от 1 до 10
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";
        cin >> c;

        if (a * b != c)
        {
            k++; //Прибавляем единицу к счётчику ошибок
            cout << "Неверно! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else
        {
            cout << "Верно!" << endl;
        }
    }
    cout << "Всего неверных ответов: " << k << endl;
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
