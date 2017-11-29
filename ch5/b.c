#include<stdio.h>
#include<stdlib.h>
void b()
{
	int i, j, sale[10][1];
	for (i = 0; i < 10; i++)
	for (j = 0; j < 1; j++)
	{
		printf("輸入%d 身高:", i+1);
		scanf("%d", &sale[i][j]);
	}
		printf("***Output***\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 0; j++)
		{
		}
		printf("編號:   %d 身高: %d\n", i+1,sale[i][j]);
		
	}
}