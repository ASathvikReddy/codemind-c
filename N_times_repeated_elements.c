#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],c,k=0,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
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
        if(c==t && a[i]!=0)
        {
            printf("%d ",a[i]);
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}
