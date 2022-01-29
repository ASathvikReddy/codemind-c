#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if((number%4==0 && number%100!=0) || number%400==0)
    {
        printf("True");
    }
    else
    printf("False");
}