#include<stdio.h>

int main(){

    int input_row;
    printf("input a number : ");
    scanf("%d",&input_row);

    for (int  row = 1; row <= input_row; row++)
    {

        for (int colum = 1; colum <= row; colum++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}