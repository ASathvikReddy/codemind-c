#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,avg,sum=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c=1;
        }
    }
    if(c==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}