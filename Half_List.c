#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],a[n],i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        a[i]=arr[j];
        j--;
        printf("%d ",a[i]);
    }
    for(j=0,i=n/2;i<n;i++)
    {
        a[i]=arr[j];
        j++;
        printf("%d ",a[i]);
    }
}