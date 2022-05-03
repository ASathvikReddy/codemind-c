#include<stdio.h>
int main()
{
    int s,t,b,cap,res;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512;
    res=cap/1024;
    printf("%dKB",res);
}