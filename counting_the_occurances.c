#include<stdio.h>
int main()
{
    int count=0;
    char str[1000],ch;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        count++;
    }
    if(count!=0)
    printf("%d",count);
    else
    printf("-1");
}