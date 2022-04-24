#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    c=a+b;
    while(c<n)
    {
        c=a+b;
        if(c<n)
        {
            a=b;
            b=c;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}