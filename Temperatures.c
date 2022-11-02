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
    for(i=0;i<n;i++)
    {
        int c=0,flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                printf("%d ",c+1);
                flag=1;
                break;
            }
            else
            {
                c+=1;
            }
        }
        if(flag==0)
        {
            printf("0 ");
        }
    }
}