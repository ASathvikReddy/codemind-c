#include<stdio.h>
int roman(char ch)
{
    int v=0;
    switch(ch)
    {
        case'I':v=1; break;
        case'V':v=5;break;
        case'X':v=10;break;
        case'L':v=50;break;
        case'C':v=100;break;
        case'D':v=500;break;
        case'M':v=1000;break;
        default:v=-1;
    }
    return v;
}
int main()
{
    int i=0,n=0;
    char s[100];
    scanf("%s",s);
    while(s[i])
    {
        if(roman(s[i])>=roman(s[i+1]))
        {
            n+=roman(s[i]);
        }
        else
        {
            n+=(roman(s[i+1])-roman(s[i]));
            i++;
        }
        i++;
    }
    printf("%d",n);
}