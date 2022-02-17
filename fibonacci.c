#include<stdio.h>
int main()
{
    int n,a=0,b=1,next;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while(n>2)
    {
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
        n--;
    }
}