#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int pl(int n)
{
    int s=0,t;
    t=n;
    while(n)
    {
        s=s*10+n%10;
        n=n/10;
    }
    if(t==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pl(i))
        {
            if(p(i))
            {
                printf("%d",i);
                break;
            }
        }
    }
}