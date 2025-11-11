#include "Class_time.hpp"
#include <iomanip>  
#include <sstream>
#include <cassert>

//нормализатор часов
void Time::Defender(){

    //кол-во секунд в дне
    const int Day=24*3600;
    //нормализуем часы
    full_second %= Day;
    //если меньше нуля присваеваем максимальное значение
    if (full_second < 0 ){

        full_second += Day;

    }

}


Time::Time(int hours, int minutes, int seconds){
    //Тест (для прикола я хз куда вставять тест)
    assert(hours > 0 or minutes > 0 or seconds > 0);
    full_second = hours * 3600 + minutes * 60 + seconds;
    Defender();
}
//начальное значение
Time::Time() : full_second(0){};

int Time::toHours(){

    return full_second / 3600;

}

int Time::toMinutes(){

    return (full_second % 3600)/60;


}

int Time::toSeconds(){

    return full_second % 60;

}
//Добавить часы (int hours - часы)
void Time::addHours(int hours){
    full_second += hours * 3600;
    Defender();
}

//Добавить минуты (int mins - минуты)
void Time::addMins(int mins){

    full_second += mins*60;
    Defender();

}
//Добавить секунды (int secs - секунды)
void Time::addSec(int secs){

    full_second += secs;
    Defender();

}

// оператор сложения (const Time& other - правый операнд  )
Time Time::operator+(const Time& other) {
    Time ans;
    //this + other работа оператора
    ans.full_second = this->full_second + other.full_second; 
    ans.Defender();
    return ans;
    
}
// оператор вычитания (const Time& other - правый операнд  )
Time Time::operator-(const Time& other) {
    Time ans;
    //this - other работа оператора
    ans.full_second = this->full_second - other.full_second;
    ans.Defender(); 
    return ans;
    
}
//функция для преобразования в строковый тип
std::string Time::int_to_s(){
    //ostringstream - динамическая строка для записи
    std::ostringstream time_string;

    time_string << std::setfill('0') << std::setw(2) << toHours() << ':'
    << std::setfill('0') << std::setw(2) << toMinutes() << ':'
    << std::setfill('0') << std::setw(2) << toSeconds();
    
    return time_string.str();

}