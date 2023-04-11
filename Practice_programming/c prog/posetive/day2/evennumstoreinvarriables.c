#include<stdio.h>

int main(){

    int x,y;

    int coutner=0,storage[99];

    printf("input 2 numbers:");
    scanf("%d %d",&x,&y);

    printf("%d %d\n",x,y);

    if (y>x)
    {
       int temp=x;
       x=y;
       y=temp;

    }

    for (int i = y; i <=x; i++)
    {
        if (i%2==0)
        {
          // printf("%d\t",i);

          storage[coutner]=i;
          coutner++;
        

        }
        
        
       
    }

    coutner--;

    for (int i = 0; i <=coutner; i++)
    {
      printf("%d\t",storage[i]);
    }
    
    
    


    return 0;
}