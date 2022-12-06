#include<stdio.h>
int main()
{
    char s[100],max='A';
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>max)
        max=s[i];
    }
    printf("%c",max);
}