#include <iostream>

using namespace std;

bool issafe(int **ansarr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (ansarr[row][y] == 1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;

    // left up diagle

    while (row >= 0 && col >= 0)
    {
        if (ansarr[row][col] == 1)
        {
            return false;
        }

        row--;
        col--;
    }

    row = x;
    col = y;

    while (row >= 0 && col <= n)
    {
        if (ansarr[row][col] == 1)
        {
            return false;
        }

        row--;
        col++;
    }

    return true;
}

bool n_queen_backtrack(int **ansarr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (issafe(ansarr, x, col, n))
        {
            ansarr[x][col] = 1;

            if (n_queen_backtrack(ansarr, x + 1, n))
            {
                return true;
               
            }

            ansarr[x][col] = 0;
        }
    }

    return false;
}

int main()
{

    int input, inputcopy, counter = 0;
    cin >> input;
    //  int arr[input][input]={0};
    // int **arr = new int *[input];
    // for (int i = 0; i < input; i++)
    // {
    //     *(arr + i) = new int[input];
    // }

    // for (int i = 0; i < input; i++)
    // {

    //     for (int J = 0; J < input; J++)
    //     {
    //         cin >> arr[i][J];
    //     }
    // }

    // int ansarr[input][input]={0};

    int **ansarr = new int *[input];
    for (int i = 0; i < input; i++)
    {
        *(ansarr + i) = new int[input];
        for (int j = 0; j < input; j++)
        {
            ansarr[i][j] = 0;
        }
    }

    n_queen_backtrack(ansarr, 0, input);
    

        for (int i = 0; i < input; i++)
        {
            cout << endl;
            for (int J = 0; J < input; J++)
            {
                cout << ansarr[i][J] << " ";
            }
        }
    

    return 0;
}