#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=(arr[i]/2)+1;j++)
        {
            if(arr[i]==j*j)
            {
                sum+=arr[i];
                break;
            }
        }
    }
    printf("%d",sum);
}