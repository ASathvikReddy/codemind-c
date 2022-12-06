#include<stdio.h>
int main()
{
    int f=0,c=0;
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            f=1;
            c++;
        }
    }
    if(f==1)
    {
        printf("Contains %d digit",c);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}