// lab6_2_2
// Юлія Моляща
// Лабораторна робота №6.2
// Опрацювання одновимірних масивів рекурсивним способом
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
    if (a[i] % 2 != 0)
        s += a[i];
    if (i < size - 1 )
        return Sum(a, size, i + 1, s);
    else
        return s;

}

int Average(int *a, int size, int i,  int n, int average)
{
    if (a[i] % 2 != 0)
    {
        n++;
    }
    if (i < size - 1)
        return Average(a, size, i + 1, n, average);
    else
        return n;
}

int main()
{
    srand((unsigned)time(NULL));

    int n;
    int min;
    int max;


    cout << "How many elements should an array consist of?\n";
    cout << "n = "; cin >> n;

    int a[n];

    cout << endl << "Please specify the interval\n";
    cout << "min = "; cin >> min;
    cout << "max = "; cin >> max;

    Create(a, n, min, max, 0);
    cout << "Original array" << endl;
    Print(a, n, 0);
    cout << endl;

    cout << "Calculating Average" << endl;
    cout << "Average value of the elements = " << Sum(a, n, 0, 0) / Average(a, n, 0, 0, 0) << endl;
    cout << endl;

    return 0;
}
