#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c,res=100,max=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            res=arr[i];
        }
        else if(c==max)
        {
            if(arr[i]<res)
            {
                res=arr[i];
            }
        }
    }
    printf("%d",res);
}