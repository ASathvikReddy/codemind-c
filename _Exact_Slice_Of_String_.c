#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        printf("%c",s[i]);
    }
}