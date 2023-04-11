#include<stdio.h>

int main (){

int arry[6];

for (int  i = 0; i < 6; i++)
{
    printf("input %d element of arry :",i+1);
    scanf("%d",&arry[i]);
    printf("your inputed arry is ; %d\n",arry[i]);
    
}

    //reversing arry

    for (int  i = 0; i <3; i++)
    {
        int firstarry ,secondarry;

    firstarry=arry[i];
    secondarry=arry[6-i-1];
    arry[i]=secondarry;
    arry[6-i-1]=firstarry;

    }

    //print reverse arry

    for (int i = 0; i < 6; i++)
    {
       printf("rev %d \n",arry[i]);
    }
    
    


    return 0;
}