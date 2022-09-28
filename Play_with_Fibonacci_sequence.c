#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a=0,b=1;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}