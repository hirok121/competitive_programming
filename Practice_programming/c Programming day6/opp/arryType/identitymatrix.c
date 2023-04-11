#include <stdio.h>
//In a square matrix if all the main diagonal elements are 1's and 
//all the remaining elements are 0's is called an Identity Matrix.

void main()
{
   int arr1[10][10];
   int r1,c1;
   int i, j, flag =1;
   
       printf("\n\n Check whether a given matrix is an identity matrix :\n ");
       printf("-----------------------------------------------------------\n");   
  
   printf("Input number of Rows for the matrix :");
   scanf("%d", &r1);
   printf("Input number of Columns for the matrix :");
   scanf("%d",&c1);   
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

    for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
	 if(i==j && arr1[i][j] != 1 )
	 {
	   flag = 0;
	   break;
	 }
	}
   }

    if (flag==1)
    {
           for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
	 if(i!=j && arr1[i][j] != 0 )
	 {
	   flag = 0;
	   break;
	 }
	}
   }

 }
    

   if(flag == 1 )
	printf(" The matrix is an identity matrix.\n\n");
   else
	printf(" The matrix is not an identity matrix.\n\n");
}