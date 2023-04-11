#include <stdio.h>
#include<stdio.h>

int main () {
  int a, i;
  printf("Input an integer number:\n");
  scanf("%d", &a);

  printf("\nNext 10 consecutive odd numbers:\n");
  for (i = a+1; i <= a+10; i++){

    if (i % 2 != 0){

      printf("%d, ", i);
      
    }
  }
  printf("\n\nNext 10 consecutive even numbers:\n");
 
  for (i = a+1; i <=a+10; i++){

    if (i % 2 == 0){

      printf("%d, ", i);
      
      
    }
  }
  return 0;
}