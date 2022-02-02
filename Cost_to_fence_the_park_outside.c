#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int area;
    area=((l+2*w)*(b+2*w)-l*b);
        printf("%d",area*c);
}
