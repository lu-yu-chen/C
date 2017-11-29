#include<stdio.h>
#include<stdlib.h>
void ex4_1()
{
	int n, i = 1, sum = 0;
	do
	{
		printf("Please input the value of n (n>0):");
		scanf("%d", &n);
	} while (n <= 0);

	do
	{
		sum += i;
		i++;
	} while (i <= n);
	printf("1+2+3+...+%d=%d\n", n, sum);
}