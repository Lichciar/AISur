// Описание класса Roboday:
 
// План на v. 0.1:
//  1)По запросу извне выдавать свою версию;
//  2)Отсчёт начинать с первого дня;
//  3)Прибавлять день;
//  4)Выводить на консоль.

// Директори препроцессора на ввод и вывод.
#include <iostream>

// Директория препроцессора для подключения интерфейса класса.
#include "Roboday.h"

// Избавляемся от пространства имён "std".
using std::cout;
using std::endl;

// Конструктор, инициализация класса.
Roboday::Roboday(short int day)
{
    // Отрицательного значения быть не должно.
    if (day >= 0)
    {
        roboday = day;
    }
    else
    {
        roboday = 1;
    }

    // Задаём версию класса.
    mainVersion = 0;
    subVersion = 1;
};

// Функция добавления рободня.
void Roboday::insRoboday()
{
    roboday = roboday + 1;
}

// Функция выводя рободня на консоль.
void Roboday:: inConsoleRoboday()
{
    cout << "Наступил " << roboday << " рободень." << endl;
}

// Функция выдачи версии класса.
short int Roboday::getMainVersion()
{
    return mainVersion;
}

// Функция выдачи версии класса.
short int Roboday::getSubVersion()
{
    return subVersion;
}