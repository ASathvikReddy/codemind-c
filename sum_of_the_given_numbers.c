#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
        n--;
    }
}