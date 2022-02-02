#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n<10000000000&& n>999999999)
    printf("Valid");
    else 
    printf("Invalid");
}