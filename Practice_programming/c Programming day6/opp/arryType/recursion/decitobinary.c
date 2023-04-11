#include<stdio.h>

int input;

void recursion(int n);

int main(){

    
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

    recursion(input);


    return 0;
}

void recursion(int n){

   if (n==0)
   {
   return;
   }

   
     recursion(n/2);
    printf("%d ",n%2);  
   

}