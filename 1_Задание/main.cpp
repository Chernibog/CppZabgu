// Автор - Шумилко Н.Д.
// Задание: https://ivtipm.github.io/Programming/Glava01/index01.htm#z11
//Главный файл
#include <iostream>
#include "Z11g.h"  // подключаем заголовок

int main() {
    // Создаём объект класса Calculator
    Calculator calc;
    calc.input();
    std::cout << "a = " << calc.Calculate_A() << std::endl; //endl - /n, отправка данных в консоль
    std::cout << " b = " << calc.Calculate_B() << std::endl;
    return 0;
}