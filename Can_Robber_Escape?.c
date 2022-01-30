#include<stdio.h>
int main()
{
    int n,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        odd++;
    }
    if(odd>2)
    printf("NO");
    else
    printf("YES");
}