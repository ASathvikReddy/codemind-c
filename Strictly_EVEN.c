#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2!=0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}