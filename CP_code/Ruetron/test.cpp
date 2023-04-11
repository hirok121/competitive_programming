#include<stdio.h>
#include<climits>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int max=INT_MIN;
    long long int sum=0;
    int min=INT_MAX;
    for(i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);

        if(t<min)
        {
            min=t;
        }

        if(t>max)
        {
            max=t;
        }
        sum=sum+t;
    }


    printf("%d %d %d\n",min,max,sum);

}