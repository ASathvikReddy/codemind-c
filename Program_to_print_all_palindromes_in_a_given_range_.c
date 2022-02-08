#include<stdio.h>
int rev(int num)
{
    int c=0;
    while(num)
    {
        c=(c*10)+num%10;
        num/=10;
    }
    return c;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
     if(i==rev(i))
     {
         printf("%d ",i);
     }
    }
}