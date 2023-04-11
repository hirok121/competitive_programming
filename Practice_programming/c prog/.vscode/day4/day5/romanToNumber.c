#include<stdio.h>


int main(){
    
    int actualNum=0;
      int i=0;
      char user_input[100];
   
    printf("intpu a Roma number : ");
    scanf("%s",user_input);

    while (user_input[i]!='\0')
    {
       switch (user_input[i])
       {
       case 'M':
          actualNum+=1000;
        break;
         case 'D' :
                actualNum+=500;

        break;
        
         case 'C' :
        actualNum+=100;
        break;
         case 'L' :
        actualNum+=50;
        break;
         case 'X':
        actualNum+=10;
        break;

          case 'V':
        actualNum+=5;
        break;
          case 'I':
        actualNum+=1;
        break;
       
       default:
        break;
       }
    i++;

    }
    
printf("%d",actualNum);

    return 0;
}