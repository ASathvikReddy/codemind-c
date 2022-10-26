#include<stdio.h>
#include<math.h>
int main()
{
    int n,s1=0;
    scanf("%d",&n);
    char s[10000];
    scanf("%s",s);
    for(int i=0;i<n-1;i++)
    {
        s1+=abs(s[i+1]-s[i]);
    }
    s1=n-s1-1;
    if(s1%3==0)
    printf("Sudhir");
    else
    printf("Ashok");
}