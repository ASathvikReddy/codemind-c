#include<stdio.h>
void fun(int a)
{
    int left=0,l,r,right=0,fact=0;
    for(int i=a;left==0;i--)
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
            l=a-left;
            break;
        }
    }
    for(int i=a;right==0;i++)
    {
        fact=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            fact++;
        }
        if(fact==1)
        {
            right=i;
            r=right-a;
            break;
        }
    }
    if(r>l || r==l)
    printf("%d
",left);
    else if( r<l )
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