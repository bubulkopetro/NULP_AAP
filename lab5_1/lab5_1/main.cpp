// Функції, що містять арифметичний вираз
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 5

#include <iostream>
#include "Header.h"


using namespace std;

double h(const double a, const double b);

int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double c = ((pow(h(s, t), 4) + h(1, s * s + t * t)) /
        (1. + pow(h(s*t, 1.),2)));

    cout << "c = " << c << endl;

    return 0;
}
