#include<stdio.h>

int input;

int  recursion(int n);

int main(){

    int sum;
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

    sum=recursion(input);

    printf("%d  ",sum); 


    return 0;
}

int  recursion(int n){

   int sum=0;
    if (n==1)
    {
       return 1;
    }else{

         
        sum=n+ recursion(n-1);
       
    }

   return sum;
    
}