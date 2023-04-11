#include <stdio.h>
#include <limits.h>
 

int noOfJumps (int arr1[], int low, int high)
{
   if (high == low)
     return 0;
   if (arr1[low] == 0)
     return INT_MAX;
   int min = INT_MAX;
   for (int i = low+1; i <= high && i <= low + arr1[low]; i++)
   {
       int jumps = noOfJumps(arr1, i, high);
       if(jumps != INT_MAX && jumps + 1 < min)
           min = jumps + 1;
   }
   return min;
}
 
int main()
{
  int arr1[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9,1,1,1};
  
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int i;
 //------------- print original array ------------------	
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
//------------------------------------------------------   
  printf("The minimum of number of jumps is required to reach the end is:  %d ", noOfJumps(arr1, 0, n-1));
  return 0;
}