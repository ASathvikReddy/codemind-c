#include<stdio.h>
int main()
{
    int n,m,i,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    printf("%d",c);
}