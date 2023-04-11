#include<stdio.h>

int main(){

    int user_input;
    printf("intpu a number : ");
    scanf("%d",&user_input);

    for (int i = 0; i <= user_input; i++)
    {
       printf("%4d  %6d  %8d\n",i ,i*i,i*i*i);
    }
    


    return 0;
}