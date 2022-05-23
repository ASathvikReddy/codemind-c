#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        arr[i]=max;
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("-1");
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
}