#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20];
	printf("Enter the string:");
	gets(str);
	strcpy(str1,str);
	if(strcmp(str,strrev(str1))==0)
	{
		printf("Entered string is pallindrome");
		}
		else
		{
			printf("Entered string is not pallindrome");
			}
			return 0;
}
