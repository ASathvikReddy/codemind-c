#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int  main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i*j==n)
            {
                if(prime(i) && prime(j))
                {
                    printf("%d ",i);
                    c++;
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}