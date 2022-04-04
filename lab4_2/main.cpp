// lab4_2
// Юлія Моляща
// Лабораторна робота №4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;



    cout << fixed;
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;


    x = xp;
    do
    {
        A = 1/abs(x+2) + 1;
        if (x<1)
            B = 7*x*x + x - 8;
        else
            if (1<=x && x<=4)
                B = (cos(x+4)/sqrt(11))/(sin(x+4)/sqrt(11)) + 3;
            else
                B = sqrt(1 + abs(cos(x)*cos(x)*cos(x)));

            y = A - B;

            cout << "|" << setw(7) << setprecision(2) << x
                 << "   |" << setw(10) << setprecision(3) << y 
                 << "    |" << endl;
            x += dx; 
    } while (x <= xk);

    cout << "---------------------------" << endl; 
    
    return 0;

}
