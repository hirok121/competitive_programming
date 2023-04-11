#include <stdio.h>
int main() {
	float numbers[5];
	int j, pctr=0, nctr=0;
	// printf("\nInput the first number: "); 
    // scanf("%f", &numbers[0]);
    // printf("\nInput the second number: "); 
    // scanf("%f", &numbers[1]);
    // printf("\nInput the third number: "); 
    // scanf("%f", &numbers[2]);
	// printf("\nInput the fourth number: "); 
    // scanf("%f", &numbers[3]);
    // printf("\nInput the fifth number: "); 
    // scanf("%f", &numbers[4]);
    printf("\nInput the five number: "); 

    for (int i = 0; i < 5; i++)
    {
      scanf("%f",&numbers[i]);
    }
    

     for (int i = 0; i < 5; i++)
    {
      printf(" %.2f \t ",numbers[i]);
    }
    

	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			
			pctr++;
		}
		else if(numbers[j] < 0)
		{
			nctr++;
		}
	}
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nNumber of negative numbers: %d", nctr);
	printf("\n");
	return 0;
}