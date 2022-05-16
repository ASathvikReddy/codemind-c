#include<stdio.h>
int main()
{
    int n,left=0,right=0,temp,rev=0;
    scanf("%d",&n);
    for(int i=n+1;right==0;i++)
    {
        temp=i;
        rev=0;
        while(temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            right=i;
            break;
        }
    }
    for (int i=n-1;left==0;i--)
    {
        temp=i;
        rev=0;
        while (temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==i)
        {
            left=i;
            break;
        }
    }
    if(right-n>n-left)
    {
        printf("%d",left);
    }
    else if(right-n<n-left)
    {
        printf("%d",right);
    }
    else
    {
        printf("%d %d",left,right);
    }
}