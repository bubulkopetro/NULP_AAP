// lab3_3
// Юлія Моляща
// Лабораторна робота №3.3
// Розгалуження, задане графіком функції.
// Варіант 5


#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x;  // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = ";cin >> R;
    cout << "x = ";cin >> x;

    // розгалуження в повній формі

    if (x<=-2)
        y = x + 3;
        else 
            if (-2<=x && x<=4)
                y =-((5 - R)/6)*(x + 2);
                else
                    if (4<x && x<=8-R)
                        y = -R;
                        else 
                            if (8-R<x && x<=8+R)
                                y = - R + sqrt((R*R) - ((x - 8)*(x - 8)));
                                else 
                                    if (8+R<x)
                                        y = -R;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0; 

}
