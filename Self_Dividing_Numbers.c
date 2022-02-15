#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int c,s,r,n;a<=b;a++)
    {
        n=a,c=0,s=0;
        while(n)
        {
            r=n%10;
            n/=10;
            c++;
            if(r==0)
            break;
            if(a%r==0)
            s++;
        }
        if(s==c)
        printf("%d ",a);
    }
}