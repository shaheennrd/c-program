#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1,j=n/10;j!=0;j/=10,i*=10);
	printf("\nThe pattern\n");
	for(j=n;j!=0;j%=i,i/=10)
	printf("\n%d",j);
}
