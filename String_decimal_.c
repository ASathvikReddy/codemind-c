#include<stdio.h>
int main(){
    int n ; 
    scanf("%d",&n);
    while(n--)
    {
        char str[1000];
        scanf("	%[^
]s",str);
        int c = 0 ,length = 0 ;
        for(int i = 0 ; str[i] !=NULL ; i++)
        {
            if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
            {
                c++;
            }
            length++;
        }
        if(length==c)
        printf("True
");
        else 
        printf("False
");
    }
}