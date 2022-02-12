#include<stdio.h>
#include<math.h>
void dis(int a)
{
   int t,rev=0,sum=0;
   t=a;
   while(a)
   {
       rev=(rev*10)+a%10;
       a/=10;
   }
   for(int i=1,r;rev;i++)
   {
       r=rev%10;
       sum+=pow(r,i);
       rev/=10;
   }
   if(sum==t)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
    
}
int main()
{
    int x;
    scanf("%d",&x);
    dis(x);
}