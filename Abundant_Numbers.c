#include<stdio.h>
void fun(int a)
{
    int sum=0;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    fun(x);
}