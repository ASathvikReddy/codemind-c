#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q,c=0;
    scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p&&a[i]<=q)
        {
            max=a[0];
            if(max<a[i])
            {
                max=a[i];
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
        
}