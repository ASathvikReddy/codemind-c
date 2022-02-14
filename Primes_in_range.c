#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j, is_prime, primes = 0;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++)
    {
        is_prime = 1;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime && i!=1)
        {
            primes++;
        }
    }
    printf("%d", primes);
}
