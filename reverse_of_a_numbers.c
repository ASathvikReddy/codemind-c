#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rev=(rev*10)+n%10;
        n/=10;
    }
    printf("%d",rev);
}