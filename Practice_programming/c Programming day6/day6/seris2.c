#include<stdio.h>
#include<math.h>

int main(){

    int lenth,a=9 ;
    double an=0 ,sum=0;
    printf("input the lenth of seris : ");
    scanf("%d",&lenth);

    for (int i = 0; i < lenth; i++)
    {
         an=an+a*pow(10,i);
       printf("%d + ",(int)an);
       sum+=an;
      
    }
    
    printf("\nsum is %d",(int)sum);

    return 0;
}