#include<stdio.h>
int main()
{
    int c=0;
    char s[100];
    scanf("%s",s);
    int b,a,l,o,n;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='b') b++;
        else if(s[i]=='a') a++;
        else if (s[i]=='l') l++;
        else if (s[i]=='o') o++;
        else n++;
    }
    l=l/2;o=o/2;
    while(b!=0&&a!=0&&l!=0&&o!=0&&n!=0)
    {
        c++;b-=1;a-=1;l-=1;o-=1;n-=1;
    }
    printf("%d",c);
}