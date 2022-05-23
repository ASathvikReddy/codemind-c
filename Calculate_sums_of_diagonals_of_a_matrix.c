#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],i,j,sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            if(i+j==n-1)
            {
                sum1+=arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",sum,sum1);
}