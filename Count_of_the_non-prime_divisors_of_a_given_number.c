#include<stdio.h>
int is_prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,count=2;
    scanf("%d",&n);
    for (int i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
            if (is_prime(i))
        {
            i++;
            continue;
        }
        else
        {
            count++;
        }
       }
    }
    printf("%d",count);
}