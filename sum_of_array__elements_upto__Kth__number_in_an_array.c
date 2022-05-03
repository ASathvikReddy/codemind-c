#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
     int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            sum+=arr[i];
        }
    }
   printf("%d",sum);
    
}