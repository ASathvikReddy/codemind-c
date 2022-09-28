#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,s1=0,s2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0 && i+2%2==0)
        {
            s+=a[i];
        }
        else
        {
            s1+=a[i];
        }
    }
    s2=abs(s-s1);
    if(s2%4==0)
    {
        printf("X ");
    }
    else
    {
        printf("Y ");
    }
}