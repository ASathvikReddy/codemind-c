#include <stdio.h>
int GCD(int a, int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main() 
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0];
    int  g=a[0];
    for(int i=1; i<n; i++)
    {
      g=GCD(a[i],l);
      l=(l*a[i])/g;
    }
    printf("%d",l);
}