#include <stdio.h>

int is_sorted(int *arr, int n, int idx)
{

    if (idx == n - 1)
    {
        return arr[idx] < arr[idx + 1];
    }

    is_sorted(arr, n, idx + 1);
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", is_sorted(arr, n, 0));

    return 0;
}