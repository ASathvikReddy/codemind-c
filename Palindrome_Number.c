#include<stdio.h>
int main()
{
    int n,num,temp,rev=0;
    scanf("%d",&n);
    while(n)
    {
        rev=0;
        scanf("%d",&num);
        temp=num;
        while(temp)
        {
          rev=(rev*10)+temp%10;
          temp/=10;
        }
        if(rev==num)
        printf("True
");
        else
        printf("False
");
        n--;
    }
}