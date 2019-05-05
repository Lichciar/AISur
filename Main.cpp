// Описание основной программы:

// План на v. 0.1:
// 1)При запуске программа должна выводить свою версию и название;
// 2)Программа должна выводить на экран такты своей работы (рободни);
// 3)Успешно скомпилироваться.

// Директория препроцессора на ввод и вывод.
#include <iostream>

// Директория препроцессора для подключения интерфейса класса.
#include "Robotime.h"

// Избавляемся от пространства имён "std".
using std::cout;
using std::endl;

// Начало функции main.
int main()
{
	// Версия программы.
	int mainVersion = 0;
	int subVersion = 3;

	// Условия остановки программы.
	short int stopCondition = 0;

	// Задаём отсчёт времени - робовремя.
	Robotime lineage;

	// Выводим приветствие.
	cout << "Программа AISur v. ";
	cout << mainVersion << "." << subVersion;
	cout << endl;
	cout << "    -Класс Robotime v. ";
	cout << lineage.getMainVersion() << "." << lineage.getSubVersion();
	cout << endl;

	// Создаём петлю.
	while (stopCondition == 0)
	{
		// Выводим в консоль дату.
		lineage.inConsoleRobotime();
		// Увеличиваем робовремя на 1.
		lineage.insRobotime();

		// Проверяем на наличие ошибок.
		stopCondition += lineage.error();
	};

	// Сообщае об успешном завершении программы.
	return 0;
};