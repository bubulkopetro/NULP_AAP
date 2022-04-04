// lab6_1_1
// Юлія Моляща
// Лабораторна робота №6.1
// Пошук елементів одновимірного масиву ітераційним способом
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>

using namespace std;

void Create(int *a, const int size, const int min, const int max)
{
    for (int i = 0; i < size; i++)
        a[i] = min + rand() % (max - min + 1);
}


void Print(int *a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}


int Sum(int *a, const int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0 && a[i] >0)
            s += a[i];
    return s;
}


int Number(int *a, const int size)
{
    int e = 0;
    for (int i = 0; i < size; i++)
    if (a[i] % 2 == 0 && a[i] >0)
        e++;
    return e;
}


void Replacing(int *a, const int size)
{
    for (int i = 0; i < size; i++)
    if (a[i] % 2 == 0 && a[i] >0)
        cout << 0 << "  ";
    else
        cout << a[i] << "  ";
}


int main()
{
    srand((unsigned)time(NULL));

    const int n = 25;
    int a[n];
    int min = -20;
    int max = 30;

    Create(a, n, min, max);
    cout << "Original array" << endl;
    Print(a, n);
    cout << endl;

    cout << "Calculating sum" << endl;
    cout << "S = " << Sum(a, n) << endl;
    cout << endl;

    cout << "Calculating number of elements" << endl;
    cout << "e = " << Number(a, n) << endl;
    cout << endl;

    cout << "Modified array" << endl;
    Replacing(a, n);
    cout << endl;

    return 0;
}
