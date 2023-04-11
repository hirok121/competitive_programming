#include<stdio.h>
#include<string.h>

int main (){

    char input_string[100];
    int length_of_string;

    printf("input a word :");
    fgets(input_string,100,stdin);

    length_of_string=strlen(input_string)-1;  //substract null char
   //printf("%d\n",length_of_string);
    if (length_of_string>10)
    {
        printf("%c%d%c",input_string[0],(length_of_string-2),input_string[length_of_string-1]);
      
      
    }else{
        puts(input_string);

    }
    


    return 0;
}