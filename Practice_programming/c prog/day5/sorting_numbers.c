#include<stdio.h>

int main(){

    int input,temp;
    printf("how many numbers want to sort :");
    scanf("%d",&input);
    int arry[input];

    for (int i = 0; i < input; i++)
    {
       printf("%d element of aarry :",i+1);
       scanf("%d",&arry[i]);
    }

    for (int i = 0; i < input-1; i++)
    {
       for (int j = i+1; j < input; j++)
       {
            if (arry[i]>arry[j])   // 2 1 3 4 5
            {
               temp=arry[i];
               arry[i]=arry[j];
               arry[j]=temp;
            }
            
       }
       
    }
    
      for (int i = 0; i < input; i++)
    {
      
       printf("%d\t",arry[i]);
    }



    return 0;
}