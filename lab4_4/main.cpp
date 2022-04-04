// lab4_4
// Юлія Моляща
// Лабораторна робота №4.4
// Табуляція функції, заданої графіком
// Варіант 5

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    double x, R, xp, xk, dx, y;

    cout << "R = "; cin >> R;
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
        if (x<-2)
            y = x + 3;
        else
            if (x>=-2 && x<=4)
            y = - 0.5*x;
            else 
                if (x>4 && x<8-R)
                y = -R;
                else 
                    if (x>=8-R && x<=8+R)
                    y = sqrt(R*R - (x-8)*(x-8)) - R;
                    else 
                        y = -R;

            cout << "|" << setw(7) << setprecision(2) << x
                 << "   |" << setw(10) << setprecision(3) << y 
                 << "    |" << endl;
            x += dx; 
    } while (x <= xk);

    cout << "---------------------------" << endl; 
    
    return 0;

}
