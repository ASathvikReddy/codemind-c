#include<stdio.h>
int main()
{
   char n;
   scanf("%c",&n);
   if(n=='A' || n=='e' || n=='i' || n=='o' || n=='u' )
   {
       printf("Vowel");
   }
   else
   {
       printf("Consonant");
   }
}