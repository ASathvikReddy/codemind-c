#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<n-2;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}