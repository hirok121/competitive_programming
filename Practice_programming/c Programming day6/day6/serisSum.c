#include<stdio.h>

int main(){

    int lenth ;
    float sum=0;
    printf("input the lenth of seris : ");
    scanf("%d",&lenth);

    for (int i = 1; i <= lenth; i++)
    {
       printf("1/%d + ",i);
       sum+=1/(float)i;
    }
    
    printf("\nsum is %f",sum);

    return 0;
}