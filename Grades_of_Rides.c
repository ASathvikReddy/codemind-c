#include<stdio.h>
int main()
{
    int h,s,sp;
    scanf("%d%d%d",&h,&s,&sp);
    if(h>50 && s>60 && sp>100)
    {
        printf("10");
    }
    else if (h>50 && s>60)
    {
        printf("9");
    }
    else if (sp>100 && s>60)
    {
        printf("8");
    }
    else if (h>50 && sp>100)
    {
        printf("7");
    }
    else if (h>50 || s>60 || sp>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}