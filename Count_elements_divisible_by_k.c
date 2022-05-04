#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}