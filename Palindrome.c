#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rev=(rev*10)+n%10;
        n/=10;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}