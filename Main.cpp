// Описание основной программы:

// План на v. 0.1:
// 1)При запуске программа должна выводить свою версию и название;
// 2)Программа должна выводить на экран такты своей работы (рободни);
// 3)Успешно скомпилироваться.

// Директория препроцессора на ввод и вывод.
#include <iostream>

// Директория препроцессора для подключения интерфейса класса.
#include "Roboday.h"

// Избавляемся от пространства имён "std".
using std::cout;
using std::endl;

// Начало функции main.
int main()
{
    // Версия программы.
    int mainVersion = 0;
    int subVersion = 1;

    // Условия остановки программы.
    short int stopCondition = 1;

    // Задаём отсчёт времени - рободни.
    Roboday lineage(2);

    // Выводим приветствие.
    cout << "Программа AIPond v. ";
    cout << mainVersion << "." << subVersion;
    cout << endl;
    cout << "    -Класс Roboday v. ";
    cout << lineage.getMainVersion() << "." << lineage.getSubVersion();
    cout << endl;

    // Создаём петлю.
    while (stopCondition > 0)
    {
        // Выводим в консоль значение рободня.
        lineage.inConsoleRoboday();
        // Увеличиваем робрдень на 1.
        lineage.insRoboday();
    };

    // Сообщае об успешном завершении программы.
    return 0;
};