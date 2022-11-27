#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,d,s=0,x=0,y=0;
    for(i=0;i<n;i++)
    {
        c=0,d=0;
        for(j=i;j<n;j++)
        {
            if(a[j]==0)
            {
                c++;
            }
            if(a[j]==1)
            {
                d++;
            }
            if(c==d)
            {
                if(s<(c+d))
                {
                    s=c+d;
                    x=i;
                    y=j;
                }
            }
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",x,y);
    }
}