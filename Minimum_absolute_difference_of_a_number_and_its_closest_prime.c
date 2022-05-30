#include<stdio.h>
void fun(int n)
{
    int left=0,right=0,fact=0;
    for(int i=n;left==0;i--)
    {
        fact=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            fact++;
        }
        if(fact==1)
        {
            left=i;
            break;
        }
    }
    for(int i=n;right==0;i++)
    {
        fact=0;
        for(int j=1;j<=n/2;j++)
        {
            if(i%j==0)
            fact++;
        }
        if(fact==1)
        {
            right=i;
            break;
        }
    }
    if(right-n>n-left || right-n==n-left)
    printf("%d",n-left);
    else
    printf("%d",right-n);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1 || n==2 || n==3 || n==5 || n==7 )
    printf("0");
    else
    fun(n);
}
