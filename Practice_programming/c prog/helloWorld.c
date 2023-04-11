#include<stdio.h>

#include<math.h>

int main(){

    printf("Hello World\n");

    char name[100];
  //  scanf("%s",name);

    fgets(name,100,stdin);

    printf("Your name is %s",name);
    puts(name);



    return 0;
}