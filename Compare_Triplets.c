#include<stdio.h>
int main()
{
    int arr[3],bee[3],a=0,b=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&bee[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]>bee[i])
        {
            a++;
        }
        else if (arr[i]<bee[i])
        {
            b++;
        }
    }
    printf("%d %d",a,b);
}