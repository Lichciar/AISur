// Описание класса Robotime:
 
// План на v. 0.2:
//  1)Добавил проверку на ошибки.

// План на v. 0.3:
//  1)Изменить Roboday на Robotime.
//  2)Переделать течение времени:часы->дни->месяцы->год:
//      - Для простоты предположим, что в одно дне 24 часа,
//        в одном месяце 30 дней, в одном году 12 месяцев.
//  3)Добавил деструктор. очищающий динамический массив.
//  4)Отформатировал вывод даты.

// Директори препроцессора на ввод и вывод.
#include <iostream>

// Директория препроцессора для подключения интерфейса класса.
#include "Robotime.h"

// Избавляемся от пространства имён "std".
using std::cout;
using std::endl;

// Конструктор, инициализация класса.
Robotime::Robotime()
{
    // Продолжительность существования вселенной (указывается разрядность,
    // например, "4" значит 9999 лет, "5" значит 99999 лет и т.д., но не меньше "4")
    roboyearLenght = 3;

    if (roboyearLenght < 4)
    {
        roboyearLenght = 4;
    };

    roboyearPtr = new short int[roboyearLenght];

    // Час сотворения вселенной.
    robohour = 15;
    
    // День и месяц сотворения вселенной.
    roboday = 1;
    robomonth =1;

    // Инициализируется год на случай, если будет больше 9999 (закладка на будущее).
    // Roboyear[0] - единицы, Roboyear[1] - десятки и т.д.
    for(loop = 0; loop < roboyearLenght; loop++)
    {
        roboyearPtr[loop] = 0;
    };

    // Год сотворения вселенной.
    roboyearPtr[3] = 2;
    roboyearPtr[2] = 0;
    roboyearPtr[1] = 1;
    roboyearPtr[0] = 9;

    // Задаём версию класса.
    mainVersion = 0;
    subVersion = 3;
}

// Деструктор, освобождение памяти.
Robotime::~Robotime()
{
    delete [] roboyearPtr;
}

// Функция добавления рободня.
void Robotime::insRobotime()
{
    robohour += 1;

    // Проверяем на переполнение кол-ва часов в день.
    if (robohour == 24)
    {
        robohour = 0;
        roboday += 1;
    };

    // Проверяем на переполнение кол-ва дней в месяце.
    if (roboday == 31)
    {
        roboday = 1;
        robomonth += 1;
    };

    // Проверяем на переполнение кол-ва месяцев в году.
    if (robomonth == 13)
    {
        robomonth = 1;
        roboyearPtr[0] += 1;
    };

    // Проверяем на переполнение кол-ва лет.
    for(loop = 0; loop < roboyearLenght; loop++)
    {
        if (roboyearPtr[loop] > 9)
        {
            roboyearPtr[loop] = 0;
            roboyearPtr[loop+1] += 1;
        };
    };
}

// Функция выводя рободня на консоль.
void Robotime::inConsoleRobotime()
{
    cout << "Дата: год ";

    for(loop = roboyearLenght - 1; loop >= 0; loop--)
    {
        cout << roboyearPtr[loop];
    }
    // "от с.в." значит "от сотворения вселенной"
    cout << " от с.в. ";
    cout << "месяц ";
    if (robomonth < 10)
    {
        cout << "0";
    };
    cout << robomonth << " день ";
    if (roboday < 10)
    {
        cout << "0";
    };
    cout << roboday << " время ";
    if (robohour < 10)
    {
        cout << "0";
    };
    cout << robohour << ":00." << endl;
}

// Функция выдачи версии класса.
short int Robotime::getMainVersion()
{
    return mainVersion;
}

// Функция выдачи версии класса.
short int Robotime::getSubVersion()
{
    return subVersion;
}

// Функция проверки на ошибку.
short int Robotime::error()
{
    // Проверяем на достижение предельной даты жизни вселенной.
    yearCounter = 0;

    // Защита от нелепой ошибки.
    for(loop = 0; loop < roboyearLenght; loop ++)
    {
        if (roboyearPtr[loop] == 9)
        {
            yearCounter += 1;
        };
    };

    // Если достигли критического возраста вселенной, то останавливаем симуляцию.
    if (yearCounter == roboyearLenght and
        robomonth == 12 and roboday == 30 and robohour == 23)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}