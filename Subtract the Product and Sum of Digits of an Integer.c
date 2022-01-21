#include<stdio.h>
int main()
{
    int n,pro=1,sum=0;
    scanf("%d",&n);
    while(n)
    {
        pro*=n%10;
        sum+=n%10;
        n/=10;
    }
        printf("%d",pro-sum);
}