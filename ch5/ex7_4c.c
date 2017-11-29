#include <stdio.h>
#include <stdlib.h>
void ex7_4c()
{
	int i, j, k, temp, flag, size;
	int arr[] = { 80, 90, 40, 70, 50, 60 };
	size = sizeof(arr) / sizeof(int);
	printf(".....Before sorted.....\n");
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	/**********Bubble sort**********/
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		printf("#%2d pass 的資料有:\n", i + 1);
		for (k = 0; k < size - i; k++)
			printf("%d ", arr[k]);
		printf("\n");
		for (j = 0; j<size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			for (k = 0; k < size - i; k++)
				printf("%d ", arr[k]);
			printf("\n");
		}

		printf("#%d pass 結束時資料順序如下: \n", i + 1);
		for (k = 0; k < size; k++)
			printf("%d ", arr[k]);
		printf("\n\n");
		if (flag == 0)
			break;
	}
	/************************************/
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for (i = 0; i < size; i++)
		printf(" %d ", arr[i]);
	printf("\n");
}