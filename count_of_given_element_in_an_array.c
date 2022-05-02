#include<stdio.h>
int main()
{
    int n,c=0,se;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}