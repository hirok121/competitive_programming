#include <stdio.h>
#include <stdlib.h>

int main()
{
    //hirok2103153
float f;
long double a=22,b=7;

f=(float)a/b;
double d=(double)a/b;
long double ld=(long double)a/b;

printf("%f \n",f);
printf("%lf \n",d);
printf("%LF \n",ld);

}
