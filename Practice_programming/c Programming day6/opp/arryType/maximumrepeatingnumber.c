#include <stdio.h>

    int maximumrepnum(int *arry,int arry_size,int *ptr);

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

        int frequency;
        int index=maximumrepnum(arr1,n,&frequency);

       if (index!=-1)
       {
        printf("The maximum repeating number is: %d ,,%d times",arr1[index],frequency);
       }else{
        printf("There is no repeating number");
       }
       

  return 0;
}


int maximumrepnum(int *arry,int arry_size,int *ptr)
{
    int ctr=1,index,temp=0;
    int i,j;

    for ( i = 0; i < arry_size; i++)
    {
        ctr=1;
       for ( j = i+1; j < arry_size; j++)
       {
        if (arry[i]==arry[j])
        {
          ctr++;
        }
       }
       
       if (ctr>temp)
       {
       temp=ctr;
       index=i;
       }

    }
    
    *ptr=temp;

    if (temp>1)
    {
        return index;
    }
   return -1;

}
