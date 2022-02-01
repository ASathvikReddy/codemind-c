#include<stdio.h>
int main()
{
    int n,ze=0,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%10==0)
        ze++;
        else if(n%10==1)
        on++;
        else if(n%10==2)
        tw++;
        else if(n%10==3)
        th++;
        else if(n%10==4)
        fo++;
        else if(n%10==5)
        fi++;
        else if(n%10==6)
        si++;
        else if(n%10==7)
        se++;
        else if(n%10==8)
        ei++;
        else if(n%10==9)
        ni++;
        n/=10;
    }
    if( ze>1 || on>1 || tw>1 || th>1 || fo>1 || fi>1 || si>1 || se>1 || ei>1 || ni>1 )
    printf("Not Unique Number");
    else
    printf("Unique Number");
}