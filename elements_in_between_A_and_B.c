#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q,c=0,min;
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p && a[i]<=q)
        {
               printf("%d ",a[i]);
               c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}