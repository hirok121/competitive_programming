#include <stdio.h>
int main() {
	float  x[3], P, A;
    printf("\nInput the first number: "); 
    scanf("%f", &x[0]);
    printf("\nInput the second number: ");
    scanf("%f", &x[1]);
    printf("\nInput the third number: ");
    scanf("%f", &x[2]);

    if(x[0] < (x[1]+x[2]) && x[1] < (x[0]+x[2]) && x[2] < (x[1]+x[0])) 
     {  
	 P = x[0]+x[1]+x[2];
	 printf("\nPerimeter  = %.1f\n", P);	 
	 
    }
    else
    {
    	printf("Not possible to create a triangle..!");

    }

    return 0;

}