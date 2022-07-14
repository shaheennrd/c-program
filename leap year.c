#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter an year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
		printf("\nIt is a leap year");
		else
		printf("\nIt is not a leap year");
		}
	else if(year%4==0)
	printf("\nIt is a leap year");
	else
	printf("\nIt is not a leap year");
	}
