#include <stdio.h>
int main()
{
   int row,colum,spc,input_rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&input_rows);

   //upper side
   for(row=0;row<input_rows;row++)
   {

    for ( colum = 0; colum < (2*input_rows-1); colum++)
    {
        if (colum >= input_rows-row-1 && colum<=input_rows+row-1 )
        {
          printf("*");
        }else{
          printf(" ");  
        }

    }
    
    printf("\n");

   }
        //bottum side

        for ( row = 0; row < input_rows-1; row++)
        {
            for ( colum = 0; colum < 2*input_rows-1; colum++)
            {

                if (colum >=row+1 && colum<=(2*(input_rows-1)-1)-row)
                {
             printf("*");
             }else{
            printf(" ");  
                  }   
               
            }
             printf("\n");

        }
        

    return 0;
}