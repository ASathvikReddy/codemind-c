#include<stdio.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    for(i=0,x=n;i<n;x--,i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j ||i+j==n-1)
            {
                printf("%d ",x);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}