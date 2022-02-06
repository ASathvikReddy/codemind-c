#include<stdio.h>
int main()
{
    int n,l=0,r;
    scanf("%d",&n);
    while(n>0)
    {
      r=n%10;
      n/=10;
        if(r>l)
       {
         l=r;
       }
    }
    printf("%d",l);
}