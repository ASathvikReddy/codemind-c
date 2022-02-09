#include<stdio.h>
int main()
{
	int a,r,x,ans=0;
	scanf("%d",&a);
	x=a;
	while(a>0)
	{
		r=a%10;
		ans+=r;
		a=a/10;
	}
	if(x%ans==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}