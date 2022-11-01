#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}