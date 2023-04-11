#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.
void even(int n, int a);


void odd(int n, int a)
{

    if (a <= n)
    {
        printf("%d ", a + 1);
       // a++;
        even(n, a+1);
    }
    else
    {
        return;
    }
}

void even(int n, int a)
{

    if (a <= n)
    {
        printf("%d ", a - 1);
      //  a++;
        odd(n, a+1);
    }
    else
    {
        return;
    }
}

int main()
{
    int n, a;

    scanf("%d %d", &n, &a);
    odd(n,a);

    return 0;
}