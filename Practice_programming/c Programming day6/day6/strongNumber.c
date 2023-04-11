#include<stdio.h>
#include<math.h>

int factorial(int x);

void main(){
    int input ,output=0 ,counter=0;
printf("input a binary number :  ");
scanf("%d",&input);

for (int i = input; i > 0; i=i/10)
{
    int remainder=i%10;
    output+=factorial(remainder);
}

    printf("%d",output);


}

int factorial(int x){

    int factorial=1;

    for (int  i = 1; i <= x; i++)
    {
        factorial*=i;
    }
    
    return factorial;

}