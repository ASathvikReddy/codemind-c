#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,m1=-1,m2=-1,m3=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>m1)
        {
            m1=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>m2 && arr[i]!=m1)
        {
            m2=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>m3 && arr[i]!=m2 && arr[i]!=m1)
        {
            m3=arr[i];
        }
    }
    if(m3==-1)
    {
        printf("%d",m1);
    }
    else
    {
        printf("%d",m3);
    }
}