#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,max=0,min=0,c=0,k=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j)
                {
                    a[j]=0;
                }
            }
        }
        if(c==a[i])
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i] || min==0)
            {
                min=a[i];
            }
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}