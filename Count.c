#include<stdio.h>
int main()
{
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("%d %d",e,o);
}