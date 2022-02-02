#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],hcf,i,j=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=a[j]%hcf;
        }
    }
    printf("%d",hcf);
}