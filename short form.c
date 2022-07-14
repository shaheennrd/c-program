#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,in=0;
	char str[80],c,sf[10];
	printf("Enter the string:");
	gets(str);
	for(i=0,j=0;(c=str[i])!='\0';i++)
	{
		if((c<'A'||c>'Z')&&(c<'a'||c>'z'))
		in=0;
		else if(!in)
		{
			in=1;
			sf[j++]=c;
			}
		}
		sf[j]=10;
		printf("\nShort Form is %s",sf);
	}
