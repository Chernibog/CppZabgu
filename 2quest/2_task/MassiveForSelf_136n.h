// MassiveForSelf_136n.h

#ifndef CPPZABGU_MASSIVEFORSELF_136N_H
#define CPPZABGU_MASSIVEFORSELF_136N_H

#include <string>
#include <vector>
#include <iostream>

// Объявление константы
const std::string filename = "f.txt";
const std::size_t numbers_size = 10;
// Функция для чтения массива из файла
std::vector<double> Massive_from_file(const std::string& filename);

// Функция для вычисления формулы 136н
double CalculateFromMassive(const std::vector<double>& numbers_a);

void random_numbers(const std::string& filename, size_t numbers_size);

std::vector<double> HandMake();

#endif // CPPZABGU_MASSIVEFORSELF_136N_H