#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}