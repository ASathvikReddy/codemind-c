#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d ",sum[i]);
    }
}