#include <iostream>

#define input 8

using namespace std;

bool issafe(int **arr, int x, int y)
{

    if (arr[x][y] == -1 && 0 <= x && x < input && 0 <= y && y < input)
    {
        return true;
    }

    return false;
}

bool horserunning(int **arr, int x, int y, int run, int *xmove, int *ymove)
{

    if (run == (input * input))
    {
        return true;
    }

    int next_xmove, next_ymove, k;

    for (k = 0; k < 8; k++)
    {
        next_xmove = x + xmove[k];
        next_ymove = y + ymove[k];

        if (issafe(arr, next_xmove, next_ymove))
        {
            arr[next_xmove][next_ymove] = run;
            
            if (horserunning(arr, next_xmove, next_ymove, run + 1, xmove, ymove))
            {
                return true;
            }

            arr[next_xmove][next_ymove] = -1;
           
        }
        
   
    }
 return false;
}

int main()
{

    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    int **arr = new int *[input];
    for (int i = 0; i < input; i++)
    {
        *(arr + i) = new int[input];
    }

    for (int i = 0; i < input; i++)
    {

        for (int J = 0; J < input; J++)
        {
            arr[i][J] = -1;
        }
    }
    arr[0][0] = 0;

    // function call
    horserunning(arr, 0, 0, 1, xMove,yMove);

    for (int i = 0; i < input; i++)
    {
        cout << endl;
        for (int J = 0; J < input; J++)
        {
            cout << arr[i][J] << " ";
        }
    }

    return 0;
}