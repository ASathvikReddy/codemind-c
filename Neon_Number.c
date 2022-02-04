#include<stdio.h>
int main()
{
	int n,i,pro,sum=0;
	scanf("%d",&n);
	pro=n*n;
	for(i=1;i<=pro;i++)
	{
		sum+=pro%10;
		pro/=10;
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}