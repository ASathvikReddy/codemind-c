#include<stdio.h>
int main()
{
    int n,m,i=1;
    scanf("%d%d",&n,&m);
    for(;i;i++)
    {
        if((m*i)%n==0)
        {
            printf("%d",m*i);
            break;
        }
    }
}