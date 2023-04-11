#include<stdio.h>
#include<math.h>

void main(){
    int input ,output=0 ,counter=0;
printf("input a binary number :  ");
scanf("%d",&input);

for (int i = input; input > 0; input=input/10)
{
    int remain=input%10;
    output+=remain*pow(2,counter);
    counter++;
    
}

printf("%d",output);



}