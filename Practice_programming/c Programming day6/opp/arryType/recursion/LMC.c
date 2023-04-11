#include<stdio.h>

int input,input2;

int recursion(int n,int n2);

int main(){

    
    printf("input a number ");
    scanf("%d %d",&input,&input2);

   int lmc=recursion(input,input2);

    printf("%d ",lmc);


    return 0;
}

int  recursion(int n,int n2){



    int i=0;
   
    i+=n;

   if (i%n==0 && i%n2==0)
   {
   return i;
   }else{
     recursion(n,n2);
   }
  //  recursion(n,n2);

}