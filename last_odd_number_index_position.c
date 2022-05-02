#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(arr[i]%2)
        c=i;
    }
        printf("%d",c);
}