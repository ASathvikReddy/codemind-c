#include<stdio.h>
int main()
{
    int count=0,x=0;
    char str[1000];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='R')
        count++;
        else if(str[i]=='L')
        count--;
        if(count==0)
        {
            x++;
        }
    }
    printf("%d",x);
}