#include<stdio.h>
int main()
{
    int number,even=0,odd=0;
    scanf("%d",&number);
    while(number)
    {
        if(number%2!=0)
        odd++;
        else
        even++;
        number/=10;
    }
    if(even>1 && odd==0)
    printf("Even");
    else if(odd>1&& even==0)
    printf("Odd");
    else
    printf("Mixed");
}