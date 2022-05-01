#include<stdio.h>
 int main()
 {
    int number,count=0,digits=0,prime=0;
    scanf("%d",&number);
    if(number==1)
    printf("Not Mega Prime");
    for(int i=1;i<=number/2;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        while(number)
        {
           digits++;
           if(number%10==2 || number%10==3 || number%10==5 || number%10==7)
           {
               prime++;
           }
          else
          {
              break;
          }
          number/=10;
        }
    }
    if(number==0 && prime==digits)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
 }