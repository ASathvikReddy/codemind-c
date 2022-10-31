#include<stdio.h>
int main()
{
    int in_num,deci,in_base;
    scanf("%d%d",&in_num,&deci);
    int c=0,out_num=0,res=0,max=0;
    while(in_num!=0)
    {
        in_base=in_num%deci;
        in_num=in_num/deci;
        if(in_base==0)
        {
           out_num=1;
           res++;
           c=res;
        }
        else
        {
            if(c>max)
            {
                max=c;
            }
            res=0;
        }
    }
    if(out_num==0)
    {
        printf("-1");
    }
    else
    
    {
        printf("%d",c);
    }
}