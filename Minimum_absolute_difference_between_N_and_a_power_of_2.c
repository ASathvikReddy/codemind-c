#include<stdio.h>
int main()
{
    int n,lp=2,rp=2;
    scanf("%d",&n);
    while(lp*2<=n)
    {
        lp*=2;
    }
    while(rp<=n)
    {
        rp*=2;
    }
    if(n-lp<rp-n)
    {
        printf("%d",n-lp);
    }
    else
    {
        printf("%d",rp-n);
    }
}