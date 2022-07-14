#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
 

int main()
{
   char a[]="";
   printf("Enter the string:");
   scanf("%s",a);
   reverse(a);
   return 0;
}
