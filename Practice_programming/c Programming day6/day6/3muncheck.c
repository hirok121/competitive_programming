#include<stdio.h>

int main(){

    int num1,num2,num3;
    printf("input 3 number : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2&&num1>num3)
    {
       printf("1st num greatest");
    }else if (num2>num1&&num2>num3)
    {
          printf("2nd num greatest");
    }else{
          printf("3rd num greatest");
    }
    

    return 0;
}