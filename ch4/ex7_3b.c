#include <stdio.h>
#include <stdlib.h>

void ex7_3b()
{
	int num[2][5];
	int index1, index2;
	int a;
	printf("&num[%d][%d]: %p\n" ,&num[index1][index2]);
	scanf("%d", a);

	printf("\n");
	printf("num=%p, num[a]=%p\n", num, num[a]);
	printf("num+1=%p, num[a]+1=%p\n", num+1, num[a]+1);
}
