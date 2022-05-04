#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,rev=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        while(arr[i])
        {
            rev=rev*10+arr[i]%10;
            arr[i]/=10;
        }
        printf("%d ",rev);
    }
}