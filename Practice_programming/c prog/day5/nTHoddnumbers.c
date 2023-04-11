#include <stdio.h>
void main()
{
   int i,n,sum=0,countr=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :\n");

   for ( i=0; ; i++)
   {
      
    if (i%2!=0)
    {
        printf("%d\t",i);
        sum+=i;
        countr++; 
    }
   if (countr%10==0)
   {
      printf("\n");
   }
    if (countr==n)
    {
     break;
    }
    
    
   }

//    for(i=1;i<=n;i++)
//    {
//      printf("%d ",2*i-1);
//      sum+=2*i-1;
//    }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}