#include<stdio.h>
int main()
{
    char str[100];
    int space=0,digits=0,vowel=0,con=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digits++;
        }
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else
        {
            con++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",vowel,con,digits,space);
}