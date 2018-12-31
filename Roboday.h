// Описание класса Roboday:
 
// План на v. 0.1:
//  1)По запросу извне выдавать свою версию;
//  2)Отсчёт начинать с первого дня;
//  3)Прибавлять день;
//  4)Выводить на консоль.

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

private:
    
    // Объявление переменных.
    // Значение Рободня.
    short int roboday;
    // Версия класса.
    short int mainVersion;
    short int subVersion;
};
