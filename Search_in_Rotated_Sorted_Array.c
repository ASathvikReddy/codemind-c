#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,m,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
            printf("%d",i);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}