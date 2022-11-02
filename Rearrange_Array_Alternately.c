#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        int m=n/2;
        if(n%2==0)
        {
            for(int j=0;j<n/2;j++)
            {
                if(j<m-1)
                {
                    printf("%d %d ",a[n-1-j],a[j]);
                }
                else
                {
                    printf("%d %d",a[n-1-j],a[j]);
                }
            }
        }
        else
        {
            for(int j=0;j<n/2;j++)
            {
                printf("%d %d ",a[n-1-j],a[j]);
            }
            printf("%d",a[m]);
        } 
        printf("
");
    }
}