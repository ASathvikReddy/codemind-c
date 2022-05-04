#include<stdio.h>
int main()
{
    int c=0;
    char s[100];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c);
}