#include<stdio.h>
#include<math.h>
int main()
{
    int f;
    float c;
    scanf("%d",&f);
    c=(((f*1.0-32)*5)/9);
    printf("%.2f",c);
}