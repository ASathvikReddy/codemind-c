#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(m<arr[i])
        {
            m=arr[i];
        }
    }
    if(m>=a&&m<=b)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}