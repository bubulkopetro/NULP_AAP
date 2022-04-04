// lab6_3_1
// Юлія Моляща
// Лабораторна робота №6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 5

#include <iostream>
#include <iomanip>

using namespace std;


template <typename R>
void ReadElements(R *arr, const int size)
{
    for(int i = 0; i < size; i++)
        {
            cout<<"Enter element ["<< i + 1 <<"] ";
            cin>>arr[i];
        }
}


template <typename R>
void PrintElements(R *arr, const int size)
{
    cout<<"Unsorted Array elements:"<<endl;
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}


template <typename R>
void Sort(R* arr, R size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


template <typename R>
void PrintSorted(R* arr, R size)
{
    cout<<"Sorted Array elements:"<<endl;
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}


int main()
{
    srand((unsigned)time(NULL));

    int n;
    
    cout<<"Enter total number of elements to read: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Input valid range!"<<endl;
        return -1;
    }
    
    int* arr = new int[n];

    ReadElements<int>(arr, n);
    PrintElements<int>(arr, n);
    Sort<int>(arr, n);
    PrintSorted<int>(arr, n);

    delete[] arr;
    return 0;
}

