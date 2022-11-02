#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=INT_MAX)
            {
                if(a[i]==a[j] && i!=j)
                {
                    c++;
                    a[i]=INT_MAX;
                }
            }
        }
    }
    printf("%d",c+n);
}