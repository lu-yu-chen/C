#include <stdio.h>
#include <stdlib.h>
int hw2_1(void)
{
	int x;
	printf("块俱计:");
	scanf("%d", &x);
	if ((x % 2) == 0)
		printf("案计\n");
	else
		printf("计\n");
	system("pause");
	return 0;
}