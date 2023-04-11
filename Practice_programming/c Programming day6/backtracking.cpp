#include <iostream>

using namespace std;

bool issafe(int **arr, int x, int y, int n)
{

    if (arr[x][y] == 1 && x < n && y < n)
    {
        return true;
    }

    return false;
}

bool mazerunning(int **arr, int x, int y, int n, int **ansarr)
{
    if (x == (n - 1) && y == (n - 1))
    {
        ansarr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n))
    {
        ansarr[x][y] = 1;
       
        if (mazerunning(arr, x + 1, y, n, ansarr))
        {
           
            return true;
        }

        if (mazerunning(arr, x, y + 1, n, ansarr))

        {
           
            return true;
        }
     
        ansarr[x][y] = 0;
        return false;
       
    }
   
    return false;
}

int main()
{

    int input, inputcopy, counter = 0;
    cin >> input;
   //  int arr[input][input]={0};
    int **arr = new int *[input];
    for (int i = 0; i < input; i++)
    {
        *(arr + i) = new int[input];
    }

    for (int i = 0; i < input; i++)
    {
        
        for (int J = 0; J < input; J++)
        {
            cin >> arr[i][J];
        }
    }

   // int ansarr[input][input]={0};

    int **ansarr = new int *[input];
    for (int i = 0; i < input; i++)
    {
        *(ansarr + i) = new int[input];
        for (int  j = 0; j < input; j++)
        {
            ansarr[i][j]=0;
        }
        
    }

    mazerunning(arr, 0, 0, input, ansarr);

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