#include<stdio.h>
int binary_search(int *arr,int n,int s,int l,int h,int m)
{
	int static i=0;
	if(i==0)
	{
		l=0,h=n-1,m=(l+h)/2;
		i++;
	}
	if(l>h)
	{
		return 0;
	}
	if(s==arr[m])
	{
		return 1;
	}
	 if(s>arr[m])
	{
		l=m+1;
		m=(l+h)/2;
	}
	 if(s<arr[m])
	{
		h=m-1;
		m=(l+h)/2;
	}
	binary_search(arr,n,s,l,h,m);
}
int main()
{
	int n,s,i,l,h,m;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	scanf("%d",&s);
	if(binary_search(arr,n,s,l,h,m))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}