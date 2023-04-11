#include <stdio.h>
int main() {
	float numbers[5];
	int  pctr=0,total=0,ave;
	
    for (int i = 0; i < 5; i++)
    {
        printf("\nInput the %d number: ",i+1);
      scanf("%f",&numbers[i]);
    }
    

     for (int i = 0; i < 5; i++)
    {
      printf(" %.2f \t ",numbers[i]);
    }
    

	
    // for(int j = 0; j < 5; j++) {
	// 	if(numbers[j] > 0)
	// 	{
	// 		pctr++;
	// 		total += numbers[j];
	// 	}	
    // }
     

     for (int i = 0; i < 5; i++)
     {
       if (numbers[i]>0)
       {
       pctr++;
       total+=numbers[i];
       }
       
     }
     

     ave=total/pctr;

	printf("\nNumber of positive numbers: %d", pctr);
	//printf("\nNumber of negative numbers: %d", nctr);
    printf("\ntotal of posetive numbers: %d", total);
   // printf("\ntotal of negative numbers: %f", negtotal);
    printf("\naverage of negative numbers: %d", ave);
  //  printf("\naverage of negative numbers: %f",negtotal/ nctr);
	printf("\n");
	return 0;
}