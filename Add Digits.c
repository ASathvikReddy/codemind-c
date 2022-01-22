 #include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n)
    {
        sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum>9)
        {
            n=sum;
        }
    }
    printf("%d",sum);
}