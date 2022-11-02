#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int a[x+y],i,j,temp;
        for(i=0;i<x+y;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<x+y;i++)
        {
            for(j=1;j<x+y;j++)
            {
                if(a[j-1]>a[j])
                {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<x+y;i++)
        {
            if(i<x+y-1)
            {
                printf("%d ",a[i]);
            }
            else
            {
                printf("%d",a[i]);
            }
        }
        printf("
");
    }
}