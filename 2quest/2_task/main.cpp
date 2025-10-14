//Программа вычисляет значение произведения из формулы 136н https://ivtipm.github.io/Programming/Glava06/index06.htm
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include "MassiveForSelf_136n.h"

using namespace std;

int main() {

    vector<double> numbers_a;
    //переменная для ответов на вопрос y/n
    char question;

    cout << "Entering data from a file? Y/N: ";
    cin >> question;

    if (question == 'N' || question == 'n') {

        // Ввод с клавиатуры
        numbers_a = HandMake(); 
    }
    else {
        cout << "Fill the file with random numbers? Y/N: ";
        cin >> question;
        if (question == 'Y' || question == 'y') {
        // генерируем случайныt числа в файл
            random_numbers(filename, numbers_size);
            }

            // Читаем данные из файла
            numbers_a = Massive_from_file(filename);
        }

    //try перенести в main под функцию
    
    // Вычисляем результат по формуле 136н
    double answer = CalculateFromMassive(numbers_a);

    // Выводим результат
    cout << "Answer = " << answer << endl;

    return 0;
}
