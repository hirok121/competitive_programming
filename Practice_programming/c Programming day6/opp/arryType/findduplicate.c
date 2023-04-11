#include <stdio.h>
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
          for ( j = i+1; j < n; j++)
          {
           if (arr1[i]>arr1[j])
           {
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;

           }
           
          }
          
        }


        for ( i = 0; i < n; i++)
        {
           if (arr1[i]!=arr1[i+1])
           {
             printf("%d\t",arr1[i]);
           ctr++;
           }
           
        }
          printf("\nduplicate %d\n",ctr);
        

        for ( i = 0; i < n; i++)
        {
            printf("%d\t",arr1[i]);
        }
        
      


        return 0;
}