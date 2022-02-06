#include<stdio.h>
int main()
{
    int number,rev=0,sum=0,count=0;
    scanf("%d",&number);
    while(number)
    {
        rev=(rev*10)+(number%10);
        number/=10;
    }
    while(rev)
    {
        if(rev%10==6 && count==0)
            sum=(sum*10)+9;
            count++;
        else
            sum=(sum*10)+(rev%10);
            rev/=10;
    }
    printf("%d",sum);
}