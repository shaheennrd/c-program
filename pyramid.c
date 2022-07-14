#include<stdio.h>
int main()
{
	int totalrow,row,space,star;
	printf("Enter the number of row:");
	scanf("%d",&totalrow);
	for(row=1;row<=totalrow;row++)
	{
	for(space=1;space<=(totalrow-row);space++)
	printf("   ");
	for(star=1;star<=(2*row)-1;star++)
	printf(" * ");
	printf("\n");
	}
	}
