#include<stdio.h>
int main()
{
    int n,sq=0;
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            sq=1;
        }
    }
    if(sq==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}