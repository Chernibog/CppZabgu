#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>

#include "MassiveForSelf_136n.h"

using namespace std;


// Теперь функция возвращает vector<double>
vector<double> Massive_from_file(const string& filename) {
    vector<double> numbers_a;
    ifstream file(filename);
    if (!file.is_open()) {
        //сообщение в throw
        cerr << "Ошибка: не удалось открыть файл f.txt!" << endl;
        return numbers_a; 
    }

    string line;
    while (getline(file, line)) {
        // Проверка, что строка не пустая (на случай пустых строк в файле)
        if (!line.empty()) {
            // try { перенести в main
            //     /*
            //      * stod вернет invalid_argument&, если например будет передано "привет" - символьный тип
            //      * stod вернет out_of_range&, если например будет передано "99999999999999999" - слишком большое значение
            //      */
            //     numbers_a.push_back(stod(line));
            // } catch (const invalid_argument& e) {
            //     throw invalid_argument("Предупреждение: пропущена недопустимая строка: " + line);
            // } catch (const out_of_range& e) {
            //     throw  out_of_range("Предупреждение: число вне диапазона: "+ line);
            }
        }
    }

    file.close();
    return numbers_a;
    


}
