#include<stdio.h>
#include<string.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    char s[20];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='H' && s[i+1]=='H')
        {
            f=1;
        }
        else
        {
            if(s[i]=='.')
            {
                s[i]='B';
            }
        }
    }
    if(f==1)
        {
            printf("NO
");
        }
    else
        {
            printf("YES
");
            printf("%s",s);
        }
}