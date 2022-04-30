#include<stdio.h>
int main()
{
    int num,temp,sum=1,x,n=0;
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        x=temp%10;
        sum=1;
        for(;x;x--)
        {
            sum*=x;
        }
        n+=sum;
        temp/=10;
    }
    if(num==n)
    printf("The number %d is a strong number",num);
    else 
    printf("The number %d is not a strong number",num);
}