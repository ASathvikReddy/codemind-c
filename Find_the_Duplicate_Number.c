#include<stdio.h>
int main()
{
    int n,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        one++;
        else if(arr[i]==2)
        two++;
        else if(arr[i]==3)
        three++;
        else if(arr[i]==4)
        four++;
        else if(arr[i]==5)
        five++;
        else if(arr[i]==6)
        six++;
        else if(arr[i]==7)
        seven++;
        else if(arr[i]==8)
        eight++;
        else if(arr[i]==9)
        nine++;
    }
    if(one>1)
    printf("1");
    else if(two>1)
    printf("2");
    else if(three>1)
    printf("3");
    else if(four>1)
    printf("4");
    else if(five>1)
    printf("5");
    else if(six>1)
    printf("6");
    else if(seven>1)
    printf("7");
    else if(eight>1)
    printf("8");
    else if(nine>1)
    printf("9");
}