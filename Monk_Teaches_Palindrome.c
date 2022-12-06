#include<stdio.h>
#include<string.h>
int pali(char *s)
{
    int n=strlen(s);
    int i,c=0;
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        {
            c++;
        }
    }
    if(c==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",s);
        int l=strlen(s);
        if(pali(s) && l%2==0)
        {
            printf("YES EVEN
");
        }
        else if(pali(s) && l%2!=0)
        {
            printf("YES ODD
");
        }
        else
        {
            printf("NO
");
        }
    }
}