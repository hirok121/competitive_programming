#include <stdio.h>
int main() {
	int a,b, i, j = 1, x =0;
	printf("Input number of lines: ");
	scanf("%d %d", &a,&b);
	for(i = 1; i <= a; i++) {
		while(x < b) {
			printf("%d ", j++);
			x++;
		}
		x=0;

		printf("\n");
  
	}
	return 0;
}