#include<stdio.h>
#include<math.h>
int main()
{
	long long int num,a;
	float x;
	scanf("%lld",&num);
	x=sqrt((double)num);
	a=x;
	
	if(a==x)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}