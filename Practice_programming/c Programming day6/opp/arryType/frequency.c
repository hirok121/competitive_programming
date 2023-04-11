#include <stdio.h>
int main()
{
    int arr1[100],freq[100], n,ctr=1;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
         // freq[i]=-1;
	    }

        for ( i = 0; i <n; i++)
        {
            ctr=1;

            for ( j = i+1; j <n; j++)         
             {
               if (arr1[i]==arr1[j])
               {
               freq[j]=-1;
               ctr++;
               }
               
            }

            if (freq[i]!=-1)
            {
              freq[i]=ctr;
            }
            
            
        }
       // print arry elements

       for ( i = 0; i < n; i++)
       {
       if (freq[i]!=-1)
       {
       printf("%d is %d times\n",arr1[i],freq[i]);
       }
       
       }
        
        
        return 0;
        }