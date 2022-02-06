#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive Number");
    }
    else if (a<0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("neither Negative nor Nositive");
    }
}