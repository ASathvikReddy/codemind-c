#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,sum,res;
    scanf("%d%d%d",&x,&y,&m);
    sum=pow(x,y);
    res=sum%m;
    printf("%d",res);
}