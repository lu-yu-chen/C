#include<stdio.h>
#include<stdlib.h>
int factorial6_5c(int);
int ex6_5b()
{
	int num;
	printf("please input a number:");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial6_5c(num));
}
int factorial6_5c(int n)
{
	int k, total = 1;
	for (k = 1; k <= n; k++)
		total *= k;
	return total;
}