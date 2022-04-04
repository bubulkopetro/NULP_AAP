// lab6_4_1
// Юлія Моляща
// Лабораторна робота №6.4
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 5

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


void CreateArray(double* e, const int n, const int Low, const int High);
void PrintArray(double* e, const int n);
int MaxElement(double* e, const int n);
int SumOfElements(double* e, const int n,int k,int sum);
int Compress(double* e,const int n,int a,int b, int i);


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
    
    CreateArray(e, n, Low, High);
    PrintArray(e, n);
    
    cout << "Maximum element = " << MaxElement(e, n) << endl;
    cout << "Sum of elements = " << SumOfElements(e,n,0.,0.) << endl;
    
    
    Compress(e, n, a, b, 0.);
    PrintArray(e, n);
    
    delete[] e;
    return 0;
}


void CreateArray(double* e, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        e[i] = Low + rand() % (High - Low + 1);
}

void PrintArray(double* e, const int n)
{
    for(int i = 0; i < n; i++)
            cout<<e[i]<<"\t";
        cout<<endl;

}

int MaxElement(double* e, const int n)
{
    int max = e[0];
    for (int i = 1; i < n; i++)
        if (e[i] > max)
            max = e[i];
    return max;
}

int SumOfElements(double* e, const int n,int k,int sum)
{
    for (int i = 0; i < n; i++)
    {
        if (e[i] > 0)
            k = i;
    }
    sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += e[i];
    }
    return sum;
}

int Compress(double* e,const int n,int a,int b, int i)
{
        size_t k = 0;

        for ( size_t i = 0; i < n; i++ )
        {
            if ( not ( a <= e[i] && e[i] <= b ) )
            {
                if ( i != k ) e[k] = e[i];
                ++k;
            }
        }

        for ( size_t i = k; i < n; i++ ) e[i] = 0;

        return 0;
}

