
#include <stdio.h>


int main() 
{
	int n=1, i, j,max=0, num_pos=0,number[n];
    printf("how many numbers do you want to input :" );
    scanf("%d",&n);
   // int number[n];
	printf("Input %d integers: \n",n);
	for(i = 0; i < n; i++) {
		scanf(" %d", &number[i]);
	}
	
	for(j = 0; j < n; j++) 
	{
		if(number[j] > max) {
			max = number[j];
			num_pos = j+1;
		}
	}
	printf("Highest value: %d\nPosition: %d\n", max, num_pos);
	return 0;
}