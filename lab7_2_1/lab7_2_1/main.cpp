// lab7_2_1
// Юлія Моляща
// Лабораторна робота №7.2.1
// Опрацювання багатовимірних масивів ітераційним способом
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a,  const int rowCount, const int colCount, const int Low, const int High);
void Print(int** a,  const int rowCount, const int colCount);
int SumMinOdd(int** a,  const int rowCount, const int colCount, int minOdd);

int main()
{
    srand((unsigned)time(NULL));
    int Low = -5;
    int High = 15;
    
    int rowCount;
    cout << "rowCount = "; cin >> rowCount;
    
    int colCount;
    cout << "colCount = "; cin >> colCount;
    
    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];
    
    Create(a, rowCount, colCount, Low, High);
    Print(a, rowCount,colCount);
    
    cout << "Sum of Min Element = " << SumMinOdd(a, rowCount, colCount, 0) << endl;
    
        for (int i = 0; i < rowCount; i++)
            delete[] a[i];
    
    delete[] a;
    
    return 0;
}

void Create(int** a,  const int rowCount, const int colCount, const int Low, const int High)
{
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < colCount; j++)
            a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a,  const int rowCount, const int colCount)
{
    cout << endl;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}

int SumMinOdd(int** a,  const int rowCount, const int colCount, int minOdd)
{
    int S = 0;
    minOdd = 0;
    for (int i = 0; i < rowCount; i++)
    {
        if (i % 2 == 0)
        {
            int index = 0;
            for (int j = 0; j < colCount; j++)
            {
                if (a[i][j] < a[i][index])
                    index = j;
            }
            minOdd = a[i][index];
                S += minOdd;
        }
    }
    return S ;
}



