#include <math.h>
#include <stdio.h>
double Series(int n)
{
	int i;
	double sums = 0.0, ser;
	for (i=1;i<=n;i++) 
	{
		ser = 1 / pow(i, i);
		sums += ser;
		}
		printf("Series:");
	return sums;
}

int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	double res = Series(n);
	printf("%f", res);
	return 0;
}
