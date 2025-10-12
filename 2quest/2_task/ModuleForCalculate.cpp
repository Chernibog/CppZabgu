#include <iostream>
#include <cmath>
#include <vector>
#include "MassiveForSelf_136n.h"

using namespace std;

//модуль для вычисления формулы 136н https://ivtipm.github.io/Programming/Glava06/index06.htm  
double CalculateFromMassive(const vector<double>& numbers_a) {
    double answer = 0;
    
    for (size_t i = 0; i < numbers_a.size(); ++i) {
        answer += pow(sqrt(abs(numbers_a[i])) - numbers_a[i], 2);
    }

    return answer;
}