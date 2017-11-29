#include<stdio.h>
#include<stdlib.h>
void ex3_8()
{
	int a, r;
	while (1)
	{
		do
		{
			printf("input an integer:");
			scanf("%d", &a);
		}
		while (a <= 0);
		{
			printf("the reverse is");
		}
		while (a != 0)
		{
			r = a % 10;
			a /= 10;
			printf("%d",r);
		}
		printf("\n\n");
	}
}