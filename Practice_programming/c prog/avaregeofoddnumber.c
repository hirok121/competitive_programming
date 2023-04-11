#include<stdio.h>

int main (){

    int number[5];
    int counter,total;

    total=0;
    counter=0;

    printf("input 5 numbers :");
    // scanf("%d ",&number[0]);
    // scanf("%d ",&number[1]);
    // scanf("%d ",&number[2]);
    // scanf("%d ",&number[3]);
    // scanf("%d ",&number[4]);

    for (int  i = 0; i <5; i++)
    {
        scanf("%d ",&number[i]);
      
    }
    


    for (int i = 0; i <5; i++)
    {
        printf("%d\t",number[i]);
    }
     printf("\n");

    for (int i = 0; i < 5; i++)
    {
       if ((number[i]%2) != 0)
       {
        counter++;
        total=total+number[i];
        
       }
       
    }
    
    printf("total is %d",total);
    printf("ave is %d",(total/counter));

    return 0;
}