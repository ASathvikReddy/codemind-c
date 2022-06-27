#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=strlen(s),i;
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
