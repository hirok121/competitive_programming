#include<stdio.h>

#define Power 2

int main (){

    int input,counter,a;
    double b;

    printf("input a number to print power table :");
    scanf("%d",&input);

    a=1;
    for (int i = 0; i <= input; i++)
    {
        if (i==0)
        {
           a=1;
           b=1;

        }else{

        a=a*2;

        b=1/(double) a;

        }

          printf(" %4d %5d %.8f\n",i,a,b);
        

    }
    



    return 0;
}