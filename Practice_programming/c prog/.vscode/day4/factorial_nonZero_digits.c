#include<stdio.h>

 long int  factorial(int n);
 int counter(long int x);
 long int factorial_loop(int n);

int main(){

    int user_input;
    printf("intpu a number : ");
    scanf("%d",&user_input);

     long int factorialnuber = factorial(user_input);
        printf("factorial of n : %d\n",factorialnuber);
          printf("factorial of n with loop: %d\n",factorial_loop(user_input));
         printf("factorial_nonZero_digits is : %d",counter(factorialnuber));



    return 0 ;
}

 long int factorial(int n){


    int factn;

    if (n==0)
    {
       return 1;

    }

    factn= factorial(n-1) *n;
    

    // for (int i = 0; i <= n; i++)
    // {
    //     n=(n-i)*(n-i-1);
       
    // }
    

return factn ;
}

int counter(long int x){

   int counterwirhout_zero=0;

    while (x>=1)
    {
        if (x%10!=0)
        {
          counterwirhout_zero++;
        }

        x=x/10;
    }
    
 return counterwirhout_zero;

}

long int factorial_loop(int n){

    long int fact_of_n=1;

    for (int  i = 1; i <= n; i++)
    {

        fact_of_n=fact_of_n*i;
      
    }
    
return fact_of_n;

}
