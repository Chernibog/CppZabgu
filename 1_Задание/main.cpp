// Автор - Шумилко Н.Д.
// Задание: https://ivtipm.github.io/Programming/Glava01/index01.htm#z11
//Главный файл
#include <iostream>
#include "Z11g.h"  // подключаем заголовок
using namespace std;

int main() {
    // Создаём объект класса Calculator
    Calculator calc;
    calc.input();
    cout << "a = " << calc.Calculate_A() << endl; //endl - /n, отправка данных в консоль
    cout << " b = " << calc.Calculate_B() << endl;
    return 0;
}
