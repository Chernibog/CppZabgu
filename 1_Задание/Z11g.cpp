// Автор - Шумилко Н.Д.
// Задание: https://ivtipm.github.io/Programming/Glava01/index01.htm#z11
//Тело
#include "Z11g.h"
#include <iostream>
#include <cmath>  // используем математические функции


void Calculator::input(){

    std::cout << "Enter:  x, y, z: ";
    std::cin >> x >> y >> z;

}


double Calculator::Calculate_A() {


    // Вычисление a
    return y + (x / (pow(y, 2) + std::abs(pow(x, 2) / (y + pow(x, 3) / 3.0))));

}

double Calculator::Calculate_B() {


    // Вычисление b
    return (1 + pow(tan(z/2),2));

}


