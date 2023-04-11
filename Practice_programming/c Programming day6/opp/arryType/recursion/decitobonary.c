#include<stdio.h>

int decitobinary(int a){

int sum=0,x=1;
while (a>0)
{
  
  sum+=x*(a%8);
  x*=10;
  a/=8;
}


return sum;

}

int main(){

    int input;
    printf("input a number ");
    scanf("%d",&input);

printf("%d  ", decitobinary(input));
    return 0;
}