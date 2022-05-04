#include<stdio.h>
int main()
{
    int c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        c++;
    }
    printf("%d",c);
}