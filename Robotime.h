// Описание класса Robotime:
// См. Robotime.cpp.

// Определение класса.
class Robotime
{
public:

	// Конструктор класса.
	Robotime();

	// Деструктор, освобождение памяти.
	~Robotime();
	
	// Увеличение Робовремени.
	void insRobotime();

	// Вывод значение Robotime на консоль.
	void inConsoleRobotime();

	// Получение версии класса.
	short int getMainVersion();
	short int getSubVersion();

	// Проверка на ошибки.
	short int error();

private:
	
	// Объявление переменных.
	// Циклическая переменная.
	short int loop;
	// Валидация летоисчисления.
	short int yearCounter;
	// Значение Робовремени.
	short int robohour;
	short int roboday;
	short int robomonth;
	short int roboyearLenght;
	short int *roboyearPtr;
	// Версия класса.
	short int mainVersion;
	short int subVersion;
};
