#include<stdio.h>
int main()
{
    long n,i;
    scanf("%ld",&n);
    if(n>=1 && n<=1000)
    {
        i=0;
        x:i++;
        printf("%ld ",i);
        if(i<n)
        goto x;
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}