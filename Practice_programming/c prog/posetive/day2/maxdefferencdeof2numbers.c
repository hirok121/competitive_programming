#include<stdio.h>

int main(){
    
    int arry[4],max,min;

    printf("input 4 numbers : ");
    scanf("%d%d%d%d",&arry[0],&arry[1],&arry[2],&arry[3]);

    max=arry[0];
    for (int i = 0; i < 4; i++)
    {
       if (max<arry[i])
       {
      max=arry[i];
       }
       
       
    }

     min=arry[0];
    for (int i = 0; i < 4; i++)
    {
       if (min>arry[i])
       {
      min=arry[i];
       }
       
       
    }
    
        printf("deff %d %d %d",max,min,max-min);

    return            0;
}