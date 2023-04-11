#include <stdio.h>
int main() 
{
	int marks[5], m, i, a=0, total=0;
	float f;
	printf("Input Mathematics marks (0 to terminate): ");
	for(i = 0;i<5 ; i++) 
	{
		scanf("%d", &marks[i]);
		if(marks[i] <= 0 && i<5) {
		break;
		}
		a=i+1;
		total += marks[i];
	}
	f = total/a;
	printf("Average marks in Mathematics: %.2f\n", f);
	return 0;
}