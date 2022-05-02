#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s=0;
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }
    avg=(s/(n*1.0));
    printf("%.2f",avg);
}
