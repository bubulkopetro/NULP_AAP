// lab4_3
// Юлія Моляща
// Лабораторна робота №4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    int a, b, c;
    double x, xp, xk, dx, F, y;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;



    cout << fixed;
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;


    x = xp;
    do
    {
        if (x<0 && b!=0)
            F = a*x*x + b;
        else
            if (x>0 && b==0)
                F = (x-a)/(x-c);
            else
                F = x/c;

            cout << "|" << setw(7) << setprecision(2) << x
                 << "   |" << setw(10) << setprecision(3) << F 
                 << "    |" << endl;
            x += dx; 
    } while (x <= xk);

    cout << "---------------------------" << endl; 
    
    return 0;

}
