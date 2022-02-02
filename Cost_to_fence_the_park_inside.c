#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int area;
    area=(l*b-(l-2*w)*(b-2*w));
    if(l<=2*w || b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",area*c);
    }
}
