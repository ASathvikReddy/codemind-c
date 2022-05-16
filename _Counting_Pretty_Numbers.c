#include<stdio.h>
int main()
{
    int n;
    int a,b,count=0;
    scanf("%d",&n);
    while (n)
    {
        scanf("%d%d",&a,&b);
        count=0;
        while(a<=b)
        {
            if(a%10==2 || a%10==3 || a%10==9)
            {
                count++;
            }
            a++;
        }
        n--;
        printf("%d
",count);
    }
}