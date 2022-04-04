// lab6_4_2
// Юлія Моляща
// Лабораторна робота №6.4
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CreateArray(double* e, const int n, const int Low, const int High, int i);
void PrintArray(double* e, const int n, int i);
int MaxElement(double* e, const int n, int max , int i);
int SumOfElements(double* e, const int n, int i,int k);
int Compress(double* e,const int n,int a,int b, int i, int j, int k);


int main()
{
    srand((unsigned)time(NULL));
    
    int n;
    int Low = -15;
    int High = 15;
    
    cout<<"Enter total number of elements to read: "; cin >> n;
    
    double* e = new double[n];
    int a,b;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    
    CreateArray(e, n, Low, High, 0);
    PrintArray(e, n, 0);
    
    cout << "Maximum element = " << MaxElement(e, n, 0, 0) << endl;
    cout << "Sum of elements = " << SumOfElements(e,n,0,0) << endl;
    
    
    Compress(e, n, a, b, 0,0,0);
    PrintArray(e, n, 0);
    
    delete[] e;
    return 0;
}


void CreateArray(double* e, const int n, const int Low, const int High, int i)
{
    if (i < n)
    {
        e[i] = Low + rand() % (High - Low + 1);
        return CreateArray(e, n, Low, High, i + 1);
    }
}

void PrintArray(double* e, const int n, int i)
{
    cout<<e[i]<<"\t";
    
    if (i < n - 1)
        PrintArray(e, n, i + 1);
    else
        cout << endl;
}

int MaxElement(double* e, const int n, int max , int i)
{
    if (e[i] > max)
        max = e[i];
    if (i < n - 1)
        return MaxElement(e, n, max, i + 1);
    else
        return max;
}

int LastPositive(double* e, const int n,int i,int k)
{
    if (i < n)
    {
        if (e[i] > 0)
        {
            LastPositive(e, n, i + 1, i);
            return k + LastPositive(e, n, k + 1,i);
        }
        else
        {
            return LastPositive(e, n, i + 1,k);
        }
    }
     return 0;
}

int SumOfElements(double* e, const int n, int i,int k)
{
    if (i < LastPositive(e,n,i,k))
    {
        return e[i] + SumOfElements(e, n, i + 1,k);
    }
    return 0;
}

int Compress(double* e,const int n,int a,int b, int i, int j, int k)
{
    if (i < n)
        {
            k = n - j;
            if (e[i] < a || e[i] > b)
            {
                e[i - j] = e[i];
                return Compress(e, n, a, b, i + 1, j,k);
            }
            else
            {
                return Compress(e, n, a, b, i + 1, j+1,k);
            }
        }
       
        if (k < n)
        {
            e[k] = 0;
            return Compress(e, n, a, b, i, j,k+1);
        }
        return 0;
    
}




