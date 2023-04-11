#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int input;

bool recursion(int n);

int main(){

    
    printf("input a number ");
    scanf("%d",&input);

     int n=1;

    if (recursion(input))
    {
        printf("yes");
    }else{
         printf("no");
    }
    


    return 0;
}

bool recursion(int n){
   
   int i=2;
   if (i<= sqrt(n) )
   {
     if (n%i==0)
    {
       return false;
    }
   }
    i++;
   
  return true;
    
}