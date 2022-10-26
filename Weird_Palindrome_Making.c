#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int k;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&k);
            if(k%2!=0)
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            c--;
        }
        printf("%d
",c/2);
    }
}