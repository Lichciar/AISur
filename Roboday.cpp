// Описание класса Roboday:
 
// План на v. 0.2:
//  1)Добавил проверку на ошибки.

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
	subVersion = 2;
};

// Функция добавления рободня.
void Roboday::insRoboday()
{
	roboday += 1;
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

// Функция проверки на ошибку.
short int Roboday::error()
{
	// Проверяем на отрицательное значение.
	if (roboday < 32767)
	{
		return 0;
	}
	else
	{
		return 1;
	};
}