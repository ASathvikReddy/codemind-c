#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else if(n%3==0)
        {
            n/=3;
        }
        else if(n%5==0)
        {
            n/=5;
        }
        else
        {
            count++;
            break;
        }
    }
    if(count==1)
    {
        printf("Not Ugly Number");
    }
    else
    {
        printf("Ugly Number");
    }
}