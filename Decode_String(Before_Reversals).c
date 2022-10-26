#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,j;
        scanf("%d%d",&a,&b);
        char s[a];
        scanf("%s",s);
        while(b>1)
        {
            char res[b];
            for(i=0;i<b;i++)
            {
                res[i]=s[i];
            }
            for(i=0;i<b;i++)
            {
                s[i]=res[b-i-1];
            }
            b--;
        }
        printf("%s
",s);
    }
}