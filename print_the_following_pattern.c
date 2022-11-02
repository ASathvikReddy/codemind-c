#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            if(i==1 || i==n || k==1 || k==n)
            printf("*");
            else
            printf(" ");
        }
        printf("
");
    }
}