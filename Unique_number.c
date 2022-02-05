#include<stdio.h>
int main()
{
    int n,z=0,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,ni=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%10==0)
             z++;
        else if(n%10==1)
             o++;
          else if(n%10==2)
             t++;
          else if(n%10==3)
              th++;
            else if(n%10==4)
             f++;
          else if(n%10==5)
             fi++;
          else if(n%10==6)
             s++;
          else if(n%10==7)
             se++;
          else if(n%10==8)
             e++;
          else if(n%10==9)
             ni++;
             n/=10;
         }
    if(z>1 || o>1 || t>1 || th>1 || f>1 || fi>1 || s>1 || se>1 || e>1 || ni>1)
         {
        printf("Not Unique Number");
         }
        else
        {
         printf("Unique Number");   
        }
}