#include<stdio.h>
int main()
{
    int sum=0;
    char s[1000];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            sum+=(s[i]-'0');
        }
    }
    printf("%d",sum);
}