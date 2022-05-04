#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0,temp,rev=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        temp=arr[i],rev=0;
        while(temp)
        {
            rev=(rev*10)+temp%10;
            temp/=10;
        }
        if(rev==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}