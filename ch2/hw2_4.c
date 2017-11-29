#include <stdio.h>
#include <stdlib.h>
int hw2_4(void)
{
	int x = 45;
	int y = 55;
	int a, b, c;
	printf("¬Ã¯]¥¤¯ù\n");
	scanf("%d", &a);
	printf("¯QÀs®³ÅK\n");
	scanf("%d", &b);
	if (((a + b) > 15) && ((a*x + b*y) >= 800))
		c = 0.9*(a*x + b*y);
	else
		c = a*x + b*y;
	printf("Á`»ù:%d\n", c);
	system("pause");
	return 0;
}