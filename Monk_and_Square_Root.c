#include<stdio.h>
int main()
{
    int n,a,b,ans;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        ans=0;
        for(int i=0;i<=b;i++)
        {
            long int t=(long int)i*i;
            if(t%b==a)
            {
                printf("%d
",i);
                ans=1;
                break;
            }
        }
        if(ans==0)
        {
            printf("-1
");
        }
    }
}