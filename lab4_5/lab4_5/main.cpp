// lab4_5winvs
// Юлія Моляща
// Лабораторна робота №4.5
// «Попадання» у плоску фігуру
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double x, y, R;

    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;

        if (( R * R >= x * x + y * y && y <= x + R && y >= 0) ||
            ( R * R >= x * x + y * y && y <= 0 && x <= 0))

            cout << "yes" << endl;

        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 2. * R * rand() / RAND_MAX - R;
        y = 2. * R * rand() / RAND_MAX - R;

        if ((x * x + y * y <= R && y <= x + R) ||
            (x < 0) ||
            (y > 0))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;

        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;

}

