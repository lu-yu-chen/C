#include <stdio.h>
#include <stdlib.h>
int hw2_2(void)
{
	int x, y;
	printf("輸入攝氏溫度:\n");
	scanf("%d", &x);
	y = 1.8*x + 32;
	printf("華氏溫度為:%d\n", y);
	system("pause");
	return 0;
}