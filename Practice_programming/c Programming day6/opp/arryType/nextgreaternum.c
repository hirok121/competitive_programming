#include <stdio.h>

int nextgreaternum();
 
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k, temp;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

        for ( i = 0; i < n; i++)
        {
          for ( j =i+1; j < n; j++)
          {
           if (arr1[i]<arr1[j])
           {
           printf("%d next greater number is %d \n ",arr1[i],arr1[j]);
           break;
           }
           
          }
          
        }
        

    return 0;
}