#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int s=0,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("%lld",s);
}