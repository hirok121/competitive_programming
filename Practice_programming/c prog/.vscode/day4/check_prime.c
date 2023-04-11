#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool is_prime(int num);

int main(){
    
    int user_input;
      int counter=0;
   
    printf("intpu a number : ");
    scanf("%d",&user_input);

    bool flag=is_prime(user_input);

    if (is_prime(user_input))
    {
       printf("prime\n");
    }else{
         printf("not_prime\n");
    }
    
    for (int i = 2; i <= user_input; i++)
    {
        
       
       if (is_prime(i))
    {
       printf(" %d\t",i);
       counter++;
    }

     if (counter%10==0) 
        {
          printf("\n");
        }
    
    }

    return 0;
}

bool is_prime(int num){

    for (int i = 2; i <= (num)/2; i++)
    {  
       if (num%i==0)
       {
        return false;
       
       }
        // return true;
       
    }
    
      return true;

}