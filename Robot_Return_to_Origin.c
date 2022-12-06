#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int x,y;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U') y++;
        else if (s[i]=='D') y--;
        else if (s[i]=='R') x++;
        else x--;
    }
    if(x==0 && y==0) printf("True");
    else printf("False");
}