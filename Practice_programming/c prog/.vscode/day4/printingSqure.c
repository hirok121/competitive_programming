#include<stdio.h>

int main (){

    int user_input;
    printf("intpu a number : ");
    scanf("%d",&user_input);


    for (int i = 0; i < user_input; i++)
    {
      for (int j = 0; j < user_input; j++)
      {

        printf("#  ");
        
      }

      printf("\n");
      
    }
    


    return 0;
}