#include<stdio.h>
int main()
{
    int count=0;
    char s[1000];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}