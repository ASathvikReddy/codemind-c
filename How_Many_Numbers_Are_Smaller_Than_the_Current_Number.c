#include<stdio.h>
int main()
{
    int n,c=0,temp;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        c=0;
        for(j=0;j<n;j++)
        {
            if(temp>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}