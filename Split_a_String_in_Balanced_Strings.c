#include<stdio.h>
int main()
{
    int count=0,x=0;
    char s[1000];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='R')
        count++;
        else if(s[i]=='L')
        count--;
        if(count==0)
        {
            x++;
        }
    }
    printf("%d",x);
}