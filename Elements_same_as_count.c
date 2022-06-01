#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],c,k;
    for(i=0;i<n;i++)
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
        if(a[i]==c)
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
