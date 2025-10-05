#include <iostream>
#include <cmath>

#include <vector>

#include "MassiveForSelf_136n.h"

using namespace std;
int main() {

    vector<double> mass_a = Massive_from_file();
    double answer = 0;

    for (int i = 0; i < mass_a.size(); i++) {
        answer += pow(sqrt(abs(mass_a[i])) - mass_a[i], 2);
    }

    cout << "Answer = " << answer << endl;
    return 0;
}