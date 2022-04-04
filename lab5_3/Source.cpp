// lab5_3winvs
// Юлія Моляща
// Лабораторна робота №5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double h(const double x);

int main()
{
    double rp, rk, z;
    int n;

    cout << "rp = "; cin >> rp; 
    cout << "rk = "; cin >> rk; 
    cout << "n  = "; cin >> n;

    cout << fixed;
    cout << "----------------------------------" << endl;
    cout << "|" << setw(7)  << "r"    << "        |"
                << setw(10) << "r(h)" << "      |"
                << endl;
    cout << "----------------------------------" << endl;

    

    double dr = (rk - rp) / n;

    double r = rp;

    while (r <= rk)
    {
        z = h(r + 1.) + pow(h(r * r + 1.), 2) + 1.;
       
        r += dr;

        cout << '|' << setw(10) << r << setw(6) << '|'
                    << setw(9) << h(r) << setw(8) << '|'
                    << endl;
    }
    return 0;
}

double h(const double x)
{
    if (abs(x) >= 1 && x == 0)
        return (cos(x) + 1.) / exp(x);
    else
    {
        double S = 0;
        int n = 0;
        double a = x * x;
        S = a;
        do
        {
            n++;
            double R = pow(x, 4) / ((2. * n + 1.) * 2. * n);
            a *= R;
            S += (1. / sin(x * x)) * a;

        } while (n < 6);

          

        return   S;

        cout << "------------------------------------" << endl;

    }

    
}

