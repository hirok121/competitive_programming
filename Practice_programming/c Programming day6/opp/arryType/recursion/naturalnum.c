#include<stdio.h>

int input;

void recursion(int n);

int main(){

    
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

    recursion(n);


    return 0;
}

void recursion(int n){

   
    if (n<=input)
    {
   printf("%d  ",n);
   recursion(n+1);

    }
    
}