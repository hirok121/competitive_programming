#include<stdio.h>

int input,input2;

void recursion(int str,int n);

int main(){

    
    printf("input a number ");
    scanf("%d %d",&input,&input2);

  recursion(input,input2);
    return 0;
}

void  recursion(int str,int n){



    int i=str;
   
   // i++;

  if (i>n)
  {
   return;
  }
 
  if (i%2==0)
  {
    printf("%d  ",i);
  } 
recursion(str+1,n);
}