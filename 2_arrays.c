#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],s=0,s1=0,c=0,d=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            c++;
        }
        else
        {
            s+=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==-1)
        {
            c++;
        }
        else
        {
            s1+=b[i];
        }
    }
    if(c==2)
    {
        printf("Infinite");
    }
    else
    {
        for(int i=0;i<100;i++)
        {
            if(i+s==s1)
            {
                d++;
            }
        }
        printf("%d",d);
    }
}