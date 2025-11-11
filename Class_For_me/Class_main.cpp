#include "Class_time.hpp"
#include <iostream>
int main(){
    //https://github.com/VetrovSV/OOP/blob/master/%D0%97%D0%B0%D0%B4%D0%B0%D0%BD%D0%B8%D1%8F%20I.md 4 пункт сделать
    //тесты

    Time t1(2, 50 ,10);
    Time t2(3, 4, 50);

    Time t3 = t1 + t2;
    Time t4 = t1 - t2;
    //to string сюда
    std::cout << t3.int_to_s() << '\n';
    std::cout << t4.int_to_s() << '\n';

    //динамический обьект
    Time* dyn_test = new Time(1,3,55);
    //пример использования (вывод):
    std::cout << (*dyn_test).int_to_s() << '\n';
    delete dyn_test;
    dyn_test = nullptr;\



    //Массив с обьектами
    Time data[3] = {
        Time(2,2,3),
        Time(23,20,10),
        Time(22,10,10)
    };
    //использование массива (вывод)
    std::cout << data[2].int_to_s() << '\n';


    //динамический массив
    int n = 3;
    Time* dyn_arr = new Time[n];

    dyn_arr[1] = Time(2,30,40);
    //вывод обьекта
    std::cout << dyn_arr[1].int_to_s() << '\n';
    //очистка памяти
    delete[] dyn_arr;
    dyn_arr = nullptr;
    
    //массив из указателей
    Time* array_pointer[3] = {

        &t1,&t2,&t3

    };
    std::cout << (*array_pointer[2]).int_to_s();
}