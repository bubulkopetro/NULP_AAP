// lab3_4
// Юлія Моляща
// Лабораторна робота №3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5


#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R; // вхідний параметр

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі

    if ((y*y<= (R*R - x*x) && y<=x+R && y>0) || (y*y>=-(R*R - x*x) && y<0 && x<0))
        cout << "yes" << endl;
    else 
        cout << "no" << endl;

    cin.get();
    return 0; 
    
}
