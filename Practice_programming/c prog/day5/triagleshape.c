#include <stdio.h>
int main()
{
   int row,coloum,spc,input_rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&input_rows);
   for(row=1;row<=input_rows;row++)
   {
	   for(int coloum=1;coloum<=(2*input_rows-1);coloum++){

	   if (coloum>=input_rows-(row-1) && coloum<=input_rows+(row-1))
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