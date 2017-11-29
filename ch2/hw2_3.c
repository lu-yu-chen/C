#include <stdio.h>
#include <stdlib.h>
int hw2_3(void)
{
	int x;
	printf("輸入氣溫:\n");
	scanf("%d", &x);
	if ((x <= 22) && (x >= 20))
		printf("請加一件薄外套!\n");
	if ((x <= 19) && (x >= 14))
		printf("天氣冷, 請穿上外套!\n");
	system("pause");
	return 0;
}