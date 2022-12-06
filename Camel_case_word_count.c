#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int l=strlen(s),c=0;
    if(s[0]>='a' && s[0]<='z')
    {
        c=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                c++;
            }
        }
        printf("%d",c+1);
    }
    else
    {
        c=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' and s[i]<='Z')
            {
                c++;
            }
        }
        printf("%d",c);
    }
}