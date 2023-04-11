#include<stdio.h>

int input;

int  recursion(int n);

int main(){

    
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

   for (int  i = 0; i < input; i++)
   {
   printf("%d  ", recursion(i));
   }
   
// 0 1 1 2 3 5

    return 0;
}

int recursion(int n){

   int firstnum,secondnum,number;

   if (n==0)
   {
   return 0;
   }else if (n==1)
   {
    return 1;
   }
   
   firstnum=recursion(n-1);
   secondnum=recursion(n-2);

    number=firstnum+secondnum;

   return number;
    
}