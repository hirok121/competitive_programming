

#include <stdio.h>

void main()
{
   int i,j,n;
   char alpha='A';
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     /* print blank spaces */
     for(j=1;j<=n-i;j++)
	printf(" ");
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       printf("%c",alpha++);
 
     /* Display  number in reverse order after middle */
     alpha=alpha-2; //1 minus for alpha++ and 1 for reduction
       for(j=i-1;j>=1;j--)
	  printf("%c",alpha--);
 
     printf("\n");
     alpha='A'; // becuse of decremenatin alpha got a minus value
   }
}