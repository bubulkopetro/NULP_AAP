// lab7_2_2
// Юлія Моляща
// Лабораторна робота №7.2.2
// Опрацювання багатовимірних масивів рекурсивним способом
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


void Create(int **a, const int rowCount, const int colCount, const int Low, const int High, const int rowNo, const int colNo);
void Print(int **a, const int rowCount, const int colCount, const int rowNo, const int colNo);
void SumMinOdd(int** a, const int rowCount, const int colCount, const int rowNo, int& S, const int min, const int colNo);
void Min(int **a, const int rowCount, const int colNo, const int i, int &min);

int main()
{
    srand((unsigned)time(NULL));
    
    int Low = -5;
    int High = 15;
    int S = 0;
    
    int rowCount;
    cout << "n = "; cin >> rowCount;
    
    int colCount;
    cout << "k = "; cin >> colCount;


    int **R = new int *[rowCount];
    for (int row = 0; row < rowCount; row++)
        R[row] = new int[colCount];


    Create(R, rowCount, colCount, Low, High, 0, 0);
    cout << endl;
    Print(R, rowCount, colCount, 0, 0);
    SumMinOdd(R, rowCount, colCount, 1, 0, min, 0);

    cout << "Sum of minimal elements in odd rows = " << S << endl;

    for (int row = 0; row < rowCount; row++)
        delete[] R[row];
    delete[] R;
    
    return 0;

}

void Create(int **a, const int rowCount, const int colCount, const int Low, const int High, const int rowNo, const int colNo)
{
    if (rowNo < rowCount)
    {
        if (colNo < colCount)
        {
            a[rowNo][colNo] = Low + rand() % (High - Low + 1);
            Create(a, rowCount, colCount, Low, High, rowNo, colNo + 1);
        }
        Create(a, rowCount, colCount, Low, High, rowNo + 1, 0);
    }
}


void Print(int **a, const int rowCount, const int colCount, const int rowNo, const int colNo)
{
    if (rowNo < rowCount)
    {
        if (colNo < colCount)
        {
            cout << setw(4) << a[rowNo][colNo];
            Print(a, rowCount, colCount, rowNo, colNo + 1);
        }
        else
        {
            cout << endl;
            Print(a, rowCount, colCount, rowNo + 1, 0);
        }
    }
    else
        cout << endl;
}



void SumMinOdd(int** a, const int rowCount, const int colCount, int rowNo, int S, int min, int colNo)
{
    if (a[rowNo][colNo] < min && rowNo % 2 != 0)
        min = a[rowNo][colNo];
    if (colNo < colCount - 1)
    {
        SumMinOdd(a, rowCount, colCount, rowNo, S, min, colNo + 1);
    }
    if (rowNo % 2 != 0)
        S += min;
    if (rowNo < rowCount - 1)
        SumMinOdd(a, rowCount, colCount, rowNo + 1, S, a[rowNo][0], 0);

}




void Min(int **a, const int rowCount, const int colNo, const int i, int &min)
{
    if (i < rowCount)
    {
        if (a[i][colNo] < min)
            min = a[i][colNo];
        Min(a, rowCount, colNo, i + 1, min);
    }
}

