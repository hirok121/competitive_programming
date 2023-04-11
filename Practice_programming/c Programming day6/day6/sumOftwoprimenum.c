#include<stdio.h>
#include<stdbool.h>

 bool Is_prime(int x);
 
 int main (){

    int input , temp1,temp2;
    printf("input a number : ");
    scanf("%d",&input);

    for (int i = 1; i <= input/2; i++)
    {
        temp1=i;
        temp2=input-i;

        if (Is_prime(temp1) && Is_prime(temp2) )
        {
           printf("%d + %d = %d\n",temp1,temp2,input);
        }
        
        
    }
    
    return 0;
 }

  bool Is_prime(int x){

    for (int i = 2; i < x/2; i++)
    {
       if (x%i==0)
       {
        return false;
        
       }
       
    }

      return true;
  }