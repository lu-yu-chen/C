#include<stdio.h>
#include<stdlib.h>

void hw3_6()
{
	int a, c;

	for (a = 1; a <= 9; a++)
	{
		for (c = 1; c <= 9; c++)
			printf("%d*%d=%2d  ", a, c, a*c);
		printf("\n");
	}
}