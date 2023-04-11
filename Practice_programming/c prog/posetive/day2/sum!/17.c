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
    
    for (int i = y; i <=x; i++)
    {
      if (i%17!=0)
      {
         printf("numbers is %d\n",i);
        sum+=i;
      }
      
    }
    
    printf("sum is %d",sum);


    return 0;
}

