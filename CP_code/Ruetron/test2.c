#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int p=a[i];
        int q=a[n-i-1];
        a[i]=q;
        a[n-i-1]=p;
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}