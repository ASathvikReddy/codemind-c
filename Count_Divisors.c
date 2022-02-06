#include<stdio.h>
int main()
{
    int l,r,k,count=0;
    scanf("%d%d%d",&l,&r,&k);
    while(l<=r)
    {
      if(l%k==0)
      count++;
      l++;
    }
    printf("%d",count);
}