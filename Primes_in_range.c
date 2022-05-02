#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j,prime=1,c= 0;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++)
    {
        prime = 1;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime && i!=1)
        {
            c++;
        }
    }
    printf("%d", c);
}