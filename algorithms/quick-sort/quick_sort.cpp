#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    int pi = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pi)
        {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);

    return i + 1;
}

void qsort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        qsort(arr, low, pivot - 1);
        qsort(arr, pivot + 1, high);
    }
}

int main()
{
    int arr[1000];
    int arrlen = 0;

    cout << "Enter array length: ";
    cin >> arrlen;

    cout << "Enter array elements: ";

    for (int i = 0; i < arrlen; ++i) {
    cin >> arr[i];
    }

    int n = arrlen / sizeof(arr[0]);

    qsort(arr, 0, n - 1);

    cout << "Sorted array in ascending order: \n";

    for (int i = 0; i < arrlen; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}