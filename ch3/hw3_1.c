#include<stdio.h>
#include<stdlib.h>

void hw3_1()
{
	int a, b, c;

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5 - a; b++)
			printf(" ");
		for (c = 1; c <= a; c++)
			printf("%d", c);
		printf("\n");
	}
}