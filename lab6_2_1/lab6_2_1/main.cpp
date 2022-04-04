// lab6_2_1
// Юлія Моляща
// Лабораторна робота №6.2
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


int Average(int *a, int size)
{
    double average = 0;
    double n = 0;
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
            n++;
        }
    }
    average = sum / n;
    if (n == 0)
    {
        cout << "There are no odd numbers in the array" << endl;
        return 0;
    }
    else
        return average;

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

    Create(a, n,min, max);
    cout << "Original array" << endl;
    Print(a, n);
    cout << endl;

    cout << "Calculating Average" << endl;
    cout << "e = " << Average(a, n) << endl;
    cout << endl;

    return 0;
}
