#include<stdio.h>
int main()
{
    int num,sum=0,pro=1;
    scanf("%d",&num);
    while(num)
    {
        pro*=num%10;
        sum+=num%10;
        num/=10;
    }
    if( sum== pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}

