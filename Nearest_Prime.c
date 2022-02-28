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
    printf("%d
",left);
    else
    printf("%d
",right);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&x);
        fun(x);
        n--;
    }
}