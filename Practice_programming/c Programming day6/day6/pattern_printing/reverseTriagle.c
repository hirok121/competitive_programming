#include<stdio.h>

int main(){

    int input_row;
    printf("input a number : ");
    scanf("%d",&input_row);

    for (int  row = 0; row < input_row; row++)
    {

        for (int colum =0; colum <input_row-row ; colum++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}