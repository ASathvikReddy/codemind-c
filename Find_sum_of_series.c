#include<stdio.h>
int main()
{
    int n;
    float sum;
    scanf("%d",&n);
    for(;n>0;n--)
    {
        sum+=1/(n*1.0);
    }
    printf("%.2f",sum);
}