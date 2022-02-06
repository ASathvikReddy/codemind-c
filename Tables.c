#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i+=2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}