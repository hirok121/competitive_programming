#include<stdio.h>

int main(){

     int x, y,sum=0;
    printf("input tow numbers: ");
    scanf("%d%d",&x,&y);

    if (y>x)
    {
       int temp=x;
       x=y;
       y=temp;
    }
    
    for (int i = y+1; i <x; i++)
    {
      if (i%7==2||i%7==3)
      {
         printf("numbers is %d\n",i);
        //sum+=i;
      }
      
    }


    return 0;
}



