// lab6_1_2
// Юлія Моляща
// Лабораторна робота №6.1
// Пошук елементів одновимірного масиву рекурсивним способом
// Варіант 5


#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>

using namespace std;

void Create(int *a, const int size, const int min, const int max, int i)
{
        a[i] = min + rand() % (max - min + 1);
        if (i < size - 1)
            Create(a, size, min, max, i + 1);
}

void Print(int *a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}


int Sum(int *a, const int size, int i, int s)
{
    if (a[i] % 2 == 0 && a[i] >0)
        s += a[i];
    if (i < size - 1 )
        return Sum(a, size, i + 1, s);
    else
        return s;
    
}

int Number(int *a, const int size, int i, int e)
{
    if (a[i] % 2 == 0 && a[i] >0)
        e++;
    if (i < size - 1)
        return Number(a, size, i + 1, e);
    else
        return e;
}

void Replacing(int *a, const int size, int i)
{
    if (a[i] % 2 == 0 && a[i] >0)
        cout << 0 << "  ";
    
    else
        cout << a[i] << "  ";
    if (i < size - 1)
        return Replacing(a, size, i + 1);
}

int main()
{
    srand((unsigned)time(NULL));
    
    const int n = 25;
    int a[n];
    int min = -20;
    int max = 30;

    Create(a, n, min, max, 0);
    cout << "Original array" << endl;
    Print(a, n, 0);
    cout << endl;

    cout << "Calculating sum" << endl;
    cout << "S = " << Sum(a, n, 0, 0) << endl;
    cout << endl;

    cout << "Calculating number of elements" << endl;
    cout << "e = " << Number(a, n, 0, 0) << endl;
    cout << endl;

    cout << "Modified array" << endl;
    Replacing(a, n, 0);
    cout << endl;

    return 0;
}
