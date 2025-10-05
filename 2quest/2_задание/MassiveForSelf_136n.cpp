#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>

#include "MassiveForSelf_136n.h"


using namespace std;
// Теперь функция возвращает vector<double>
vector<double> Massive_from_file() {
    vector<double> numbers_a;
    ifstream file("f.txt");
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось открыть файл f.txt!" << endl;
        return numbers_a; // пустой вектор
    }

    string line;
    while (getline(file, line)) {
        // Проверка, что строка не пустая (на случай пустых строк в файле)
        if (!line.empty()) {
            try {
                numbers_a.push_back(stod(line));
            } catch (const invalid_argument& e) {
                cerr << "Предупреждение: пропущена недопустимая строка: " << line << endl;
            } catch (const out_of_range& e) {
                cerr << "Предупреждение: число вне диапазона: " << line << endl;
            }
        }
    }

    file.close();
    return numbers_a;
}