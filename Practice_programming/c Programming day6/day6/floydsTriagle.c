#include <stdio.h>
int main()
{
   int row,coloum,spc,input_rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&input_rows);
   for(row=1;row<=input_rows;row++)
   {
	   for(int coloum=1;coloum<=row;coloum++){

	   if ((row+coloum)%2==0)
      {
         printf("1");
      }else{
         printf("0");
      }
   }
   	printf("\n");
}

   return 0;
}