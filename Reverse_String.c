#include<stdio.h>
int main()
{
	char s[100];
	scanf("%[^
]s",s);
	int i,j,t;
	for(i=0;s[i] != NULL;i++) ;
    int l=i;
    i=0;
    j=l-1;
    while(i<j)
    {
 	 t=s[j];
   	 s[j]=s[i];
   	 s[i]=t;
   	 i++;
   	 j--;
    }
    printf("%s",s);
}