#include<stdio.h>
#include<math.h>

int main(){

    int X ,lenth ;
    double sum=1;
    long int factorial=1;
    printf("input value of x : ");
    scanf("%d",&X);
     printf("input the lenth of seris : ");
    scanf("%d",&lenth);

    for (int i = 1; i < lenth; i++)
    {
    //    printf("1/%d + ",i);
    //    sum+=1/(float)i;
    factorial*=i;
    sum+=pow(X,i)/factorial;
    
    }
    
    printf("\nsum is %f",sum);

    return 0;
}