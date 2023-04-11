#include <iostream>

using namespace std;

int minjupm(int arr[], int n)
{

    int sum = 0, jump = 0;
    for (int i = 0; i < n; i += arr[i])
    {
        sum += arr[i];
        jump++;

        if (sum > n)
        {

            return jump;
        }
    }
    return -1;
}

int main()
{

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "minimum jump need " << minjupm(arr, n);
}