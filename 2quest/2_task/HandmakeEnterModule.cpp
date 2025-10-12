#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>

#include "MassiveForSelf_136n.h"

using namespace std;


// функция возвращает vector<double>
vector<double> HandMake() {
    char end_vector;
    //вектор для хранения чисел
    vector<double> numbers_a;
    int i = 0;

    //цикл ручного ввода
    while ( end_vector == 'Y' || end_vector == 'y'){
        cout << "Введите число в массив" << (i+1) << "всего";
        numbers_a.push_back(i);

        //закончить ввод?
        if (i % 5==0){
            cout << "Finish typing? Y/N";
            cin >> end_vector;
        }
    }
    return numbers_a;
}