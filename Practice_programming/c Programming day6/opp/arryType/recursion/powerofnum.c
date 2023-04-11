#include<stdio.h>

int input;

int  recursion(int n,int pow);

int main(){

    int sum,n=2;
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

    sum=recursion(n,input);

    printf("%d  ",sum); 


    return 0;
}

int  recursion(int n,int pow){

   
    if (n==1)
    {
       return n;
    }

  int result=n*n;

  recursion(n,pow);

   return result;
    
}