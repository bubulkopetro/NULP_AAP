// lab6_3_2
// Юлія Моляща
// Лабораторна робота №6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 5

#include <iostream>
#include <iomanip>

using namespace std;


template <typename R>
void ReadElements(R *arr, const int size, const int i)
{

    cout<<"Enter element ["<< i + 1 <<"] ";
    cin>>arr[i];
    if (i < size - 1)
        ReadElements(arr, size, i + 1);
}


template <typename R>
void PrintElements(R *arr, const int size, const int i)
{
    if (i == 0)
        cout<<"Unsorted Array elements:"<<endl;
        cout<<arr[i]<<"\t";
    
    if (i < size - 1)
        {
        PrintElements(arr, size, i + 1);
        }
    
    else
        cout<<endl;
}


template <typename R>
void Sort(R* arr, R size,  const int i)
{
    if (size == 1)
        return;
    
        for (int i=0; i<size; i++)
            if (arr[i]<arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;;
            }

    Sort(arr, size-1, i);
}


template <typename R>
void PrintSorted(R *arr, const int size, const int i)
{
    if (i == 0)
        cout<<"Sorted Array elements:"<<endl;

    if (i < size)
    {
        cout<<arr[i]<<"\t";

        PrintSorted(arr, size, i + 1);
    }
    else
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

    ReadElements<int>(arr, n, 0);
    PrintElements<int>(arr, n, 0);
    Sort<int>(arr, n, 0);
    PrintSorted<int>(arr, n, 0);

    delete[] arr;
    return 0;
}

