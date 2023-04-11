#include <stdio.h>

void print()
{

    int testvar = 5;
    printf("static variable %d\n\n", testvar);
}

extern int testvar;


int main()
{

    
    printf("%d \n", testvar);

    print();
    return 0;
}
