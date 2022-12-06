#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char apf[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arr[10];
    int i,c=0,r;
    while(a)
    {
        r =a%26;
        if(r==0)
        {
            arr[i]=apf[25];
            a=a/26-1;
            c++;
            i++;
        }
        else
        {
            arr[i]=apf[r-1];
            a/=26;
            c++;
            i++;
        }
    }
    for(int i = c-1; i>= 0 ;i--)
    {
        printf("%c",arr[i]);
    }
}