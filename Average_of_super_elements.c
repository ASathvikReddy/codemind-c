#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            sum+=arr[i];
            count++;
            arr[i]=0;
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else{
        float x=(sum*1.0)/(count*1.0);
        printf("%.2f",x);
    }
}
