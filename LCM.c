#include<stdio.h>
int main()
{
   int n1,n2,i=1;
   scanf("%d%d",&n1,&n2);
   for(;i;i++)
   {
      if((n2*i)%n1==0)
      {
          printf("%d",n2*i);
          break;
      }
   }
}