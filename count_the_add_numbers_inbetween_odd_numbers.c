#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(arr[i]%2 && arr[i+2]%2 && arr[i+1]%2)
        {
            c++;
        }
    }
    printf("%d",c);
}