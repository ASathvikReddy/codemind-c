#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            sum+=arr[i]%10;
            arr[i]/=10;
        }
    }
    printf("%d",sum);
}