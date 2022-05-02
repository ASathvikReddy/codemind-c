#include<stdio.h>
 int main()
 {
    int n,c=0,d=0,p=0;
    scanf("%d",&n);
    if(n==1)
    printf("Not Mega Prime");
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        while(n)
        {
           d++;
           if(n%10==2 || n%10==3 || n%10==5 || n%10==7)
           {
               p++;
           }
          else
          {
              break;
          }
          n/=10;
        }
    }
    if(n==0 && p==d)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
 }