#include<stdio.h>
int divi(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(divi(i)==9)
        {
            printf("%d ",i);
            c++;
        }
    }
    printf("
");
    printf("Total=%d",c);
}