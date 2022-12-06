#include<stdio.h>
int main()
{
    int c=0,count=0;
    char s[10000];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>count)
            {
                count=c;
            }
            c=0;
        }
    }
    if(c>count)
    {
        count=c;
    }
    printf("%d",count);
}