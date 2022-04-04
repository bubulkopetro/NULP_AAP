// lab13_1
// Юлія Моляща
// Лабораторна робота №13.1
// Простори імен
// Варіант 5

#include <iostream>
#include <ostream>
#include <math.h>
#include <cmath>
#include <iomanip>

#include "dod.hpp"
#include "sum.hpp"
#include "var.hpp"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << endl;

    
    
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
            << setw(7) << "log((1+x)/(1-x))" << "   |"
            << setw(4) << "S" << "      |"
            << setw(5) << "n" << "   |"
            << endl;
    cout << "-------------------------------------------------" << endl;
    
    x = xp;
    while (x <= xk)
    {
        sum();

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
                     << setw(10) << setprecision(5) << log((1+x)/(1-x)) << "   |"
                     << setw(10) << setprecision(5) << S << "   |"
                     << setw(5) << n << "   |" << endl;

        x += dx;
    }
    
    cout << "-------------------------------------------------" << endl;

    cin.get();
    return 0;
}


