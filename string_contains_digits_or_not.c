#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f=0;
        char s[100];
        scanf("%s",s);
        for(int i=0;s[i]!=NULL;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                f=1;
            }
        }
        if(f==1)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}