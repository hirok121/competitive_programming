#include<stdio.h>

int main(){

    int number,flag ,counter=0;

    printf("input a number :");
    scanf("%d",&number);

  
    for (int i = 2; i <= number; i++)
    {
        flag=1;
      for (int j = 2; j <= i/2 && flag==1; j++)
      {
        
        if (i%j==0)
        {
           flag=0;
        }

      }
        if (flag==1)
        {
           printf("%d\t",i);
           counter++;
           
        }
        
        if (counter%10==0)
        {
          printf("\n");
        }
        

        
      
      
      
    }
    


    return 0;
}