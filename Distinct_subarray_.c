#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<m+1;i++)
    {
        int r=0;
        for(int j=i;j<m+1;j++)
        {
            r+=j;
            if(r%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}