#ifndef CLASS_TIME_HPP
#define CLASS_TIME_HPP
#include <iostream>
#include <string>
//Создание класса Время. Сложение, вычитание. Добавление минут, секунд, часов и т.п. 
//Перевод времени в секунды, часы, минуты. Преобразование в строку.



class Time{

private:
//общее время в секундах
int full_second;
//функция нормализации
void Defender();

public:
//конструктор
Time();
Time(int hours, int minutes, int seconds);



//Операторы + и - (other - следующий обьект)
Time operator+(const Time& other);
Time operator-(const Time& other);

//функция добавление секунд (int secs - секунды)
void addSec(int secs);
//функция добавление минут (int mins - минуты)
void addMins(int mins);
//функция добавление часов (int hours - часы
void addHours(int hours);

//перевод в часы минуты секунды
//методы константые - снизу все
int toHours();
int toMinutes();
int toSeconds();

// нормализация в строковый тип типа (00:00:00)
std::string int_to_s();

};
#endif