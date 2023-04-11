#include <iostream>
using namespace std;

void MMMsort(int *arr, int l, int mid, int r)
{

    int n1, n2;
    n1 = mid - l + 1;
    n2 = r - mid;

    int carr1[n1];
    int carr2[n2];

    for (int i = 0; i < n1; i++)
    {
        carr1[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        carr2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (carr1[i] < carr2[j])
        {
            arr[k] = carr1[i];
            i++;
        }
        else
        {
            arr[k] = carr2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = carr1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = carr2[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr, int l, int r)
{

    if (l < r)
    {
        int mid = (r + l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        MMMsort(arr, l, mid, r);
    }
}

int main()
{

    int lenth;
    cin >> lenth;

    int arr[lenth];
    for (int i = 0; i < lenth; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, lenth-1);

    for (int i = 0; i < lenth; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}