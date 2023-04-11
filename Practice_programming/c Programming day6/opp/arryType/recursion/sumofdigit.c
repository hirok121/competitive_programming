#include<stdio.h>

int input;

int recursion(int n);

int main(){

    
    printf("input a number ");
    scanf("%d",&input);

    int sum =recursion(input);
    printf("%d ",sum);
    return 0;
}

int recursion(int n){

    int sum=0;

    if (n==0)
    {
       return 0;
    }
    

    sum=n%10+recursion(n/10);

   return sum;
    
}