#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2)
{
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low;
    int j = low;
    while (i <= high)
    {
        if (arr[i] <= pivot)
        {
            swap(arr, i, j);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j - 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // int pivot = arr[high];
        int pos = partition(arr, low, high);

        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}

int main()
{
    int n;
    cout << " enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}