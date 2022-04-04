// lab3_1
// Юлія Моляща
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 5

#include <iostream>
#include <cmath>

using namespace std;

int main()

{

    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу 
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x; 
    
    A = (1/abs(x+2)) + 1;
    
     // спосіб 1: розгалуження в скороченій формі

    if (x<1)
        B = (7 * x * x) + x - 8;
    if (1<=x && x<=4)
        B = (cos((x + 4)/ sqrt(11))/ sin((x + 4)/ sqrt(11))) + 3;
    if (x>4)
        B = sqrt(1 + abs(cos(x) * cos(x) * cos(x)));

    y = A - B;
    
    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі

    if (x<1)
        B = (7 * x * x) + x - 8;
    else 
        if (1<=x && x<=4)
            B = (cos((x + 4)/ sqrt(11))/ sin((x + 4)/ sqrt(11))) + 3;
        else 
            if (x>4)
                B = sqrt(1 + abs(cos(x) * cos(x) * cos(x)));

    y = A - B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0; 

}
