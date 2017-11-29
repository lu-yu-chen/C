#include<stdio.h>
#include<stdlib.h>
void ex3_7()
{
	int i, j, n = 6;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}