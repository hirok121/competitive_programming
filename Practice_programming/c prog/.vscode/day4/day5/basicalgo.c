#include<stdio.h>


int main(){
    
    int user_input1,user_input2;
      int counter=0;
   
    printf("intpu a number : ");
    scanf("%d",&user_input1);
     printf("intpu a number : ");
    scanf("%d",&user_input2);

    if (user_input1==30||user_input2==30||user_input1+user_input2==30)
    {
        printf("true");
    }else{
         printf("false");
    }
    
    
    
        return 0;
    
    }


