#include<stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&m);
        count=0;
        for(int i=1;i*i<=m;i++)
        {
            if(i*i==m)
            {
                count++;
                printf("True
");
                break;
            }
        }
        if(count==0)
        {
            printf("False
");
        }
        n--;
    }
}