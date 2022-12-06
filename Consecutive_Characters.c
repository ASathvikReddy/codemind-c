#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int c=0,d=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else 
        {
            if(d<c)
            {
                d=c;
            }
            c=0;
        }
    }
    if(d<c)
    {
        d=c;
    }
    printf("%d",d+1);
}