#include<stdio.h>
#include<math.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long s=0,k=0,s1=0;
    while(n)
    {
        s+=(n%10)*pow(8,k);
        n/=10;
        k++;
    }
    k=1;
    while(s)
    {
        s1+=(s%2)*k;
        s/=2;
        k*=10;
    }
    printf("%lld",s1);
}