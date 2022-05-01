#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,os=0,es=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es+=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            os+=arr[i];
        }
    }
    int res=abs(es-os);
    printf("%d",res);
}