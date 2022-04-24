#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=1;
        scanf("%d",&n);
        while(n)
        {
             sum*=n;
             n--;
        }
        printf("%d
",sum);
    }
}