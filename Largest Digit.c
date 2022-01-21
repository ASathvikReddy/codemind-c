#include<stdio.h>
int main()
{
    int n,large=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    if(large<rem)
    {
        large=rem;
    }
    }
    printf("%d",large);
    return 0;
}