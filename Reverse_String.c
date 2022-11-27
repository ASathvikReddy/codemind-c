#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int a[1000],n,i,k=0,j=0,temp;
    scanf("%[^
]s",s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    for(i=0;s[i];i++)
    {
        if(s[i]==' ')
        {
            a[k++]=i;
        }
    }
    a[k]=i;
    for(i=0;i<=k;i++)
    {
        n=a[i]-j;
        for(int l=0;l<n/2;l++)
        {
            temp=s[l+j];
            s[l+j]=s[a[i]-1-l];
            s[a[i]-1-l]=temp;
        }
        j=a[i]+1;
    }
    printf("%s",s);
}