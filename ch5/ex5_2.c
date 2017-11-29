#include<stdio.h>
#include<stdlib.h>
void  ex5_2()
{
	int A[2][4][3] = { { { 21, 32, 65 }, { 78, 94, 76 }, { 79, 44, 65 }, { 89, 54, 73 } }, { { 32, 56, 89 }, { 43, 23, 32 }, { 32, 56, 78 }, { 94, 78, 45 } } };
	int a, b, c, max, min;
	max = min = A[0][0][0];
	for (a = 0; a < 2; a++)
	for (b = 0; b < 4; b++)
	for (c = 0; c < 3; c++)
	{
		if (A[a][b][c]>max)
			max = A[a][b][c];
		if (A[a][b][c] < min)
			min = A[a][b][c];
	}
	printf("最大值:%d\n", max);
	printf("最小值:%d\n", min);
}