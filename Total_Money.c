#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long D,d,p,q,r,s,sum=0;
        scanf("%lld%lld%lld%lld",&D,&d,&p,&q);
        r=D/d;
        s=D%d;
        for(int i=0;i<r;i++)
        {
            sum+=(p+(q*i))*d;
        }
        sum+=(p+(q*r))*s;
        printf("%lld
",sum);
    }
}