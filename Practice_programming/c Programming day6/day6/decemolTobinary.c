#include<stdio.h>
#include<math.h>

void main(){
    int input,arry[8],arryindex=7;
printf("input a decimal number(upto 255) :  ");
scanf("%d",&input);
//arrylenth=log(input)/log(2)+1;

for (int i = input ; input  > 0; input =input/2)
{
   if (input%2!=0)
   {
    arry[arryindex]=1;
   
   }else{
     arry[arryindex]=0;
   }
   arryindex--;
   
}
//printf("arryindex %d\n",arryindex);

for (int i = 0; i <= arryindex; i++)
{
  arry[i]=0;
}

//printf("arryindex %d\n",arryindex);


for (int i = 0; i <= 7; i++)
{
 printf("%d",arry[i]);
}


//printf("%d",arrylenth);

}