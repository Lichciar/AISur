// Описание класса Roboday:
 
// План на v. 0.2:
//  1)Добавил проверку на ошибки.

// Определение класса.
class Roboday
{
public:

	// Конструктор класса.
	Roboday(short int);
	
	// Добавление Рободня.
	void insRoboday();

	// Вывод значение Roboday на консоль.
	void inConsoleRoboday();

	// Получение версии класса.
	short int getMainVersion();
	short int getSubVersion();

	// Проверка на ошибки.
	short int error();

private:
	
	// Объявление переменных.
	// Значение Рободня.
	short int roboday;
	// Версия класса.
	short int mainVersion;
	short int subVersion;
};
