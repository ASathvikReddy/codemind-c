#include<stdio.h>
int main()
{
	int r,c,sum=0;
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("%d ",sum);
}