#include<stdio.h>
int main()
{
    int n,c=0,d=0,temp;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        d=0;
        while(temp)
        {
            temp/=10;
            d++;
        }
        if(d%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}