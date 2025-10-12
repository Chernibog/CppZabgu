#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include "MassiveForSelf_136n.h"


using namespace std;

//функция для заполнения файла рандомными числами
void random_numbers(const string& filename, size_t numbers_size){
    //открытие для записи в файл
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Не удалось открыть файл!" << endl;
        exit(EXIT_FAILURE);
    }
    //заполнение рандомными символами 
    for (size_t i = 0; i < numbers_size;i++ ){
        file << rand()%100<<endl;
    }

    file.close();
}