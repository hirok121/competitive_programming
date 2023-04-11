#include <stdio.h>
 
int findCeiling(int arr1[], int low, int high, int x)
{
     int i;
    if (x <= arr1[low])
    return low;
   for (i = low; i < high; i++)
   {
       if (arr1[i] == x)
          return i;
 
       if (arr1[i] < x && arr1[i + 1] >= x)
           return i + 1;
   }
   return -1;
}

int main()
{
    int arr1[] = {1, 3, 4, 7, 8, 9, 9, 10};
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    int x = 5,i;
//------------- print original array ------------------	
	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");	
//----------------------------------------------------	
    int index = findCeiling(arr1, 0, ctr-1, x);
    if (index == -1)
        printf("No ceiling for the number %d  exists in array. ", x);
    else
        printf("The ceiling of %d is: %d", x, arr1[index]);
    getchar();
    return 0;
}