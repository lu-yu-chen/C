#include <stdio.h>
#include <stdlib.h>
int hw2_1(void)
{
	int x;
	printf("��J�@�Ӿ��:");
	scanf("%d", &x);
	if ((x % 2) == 0)
		printf("����\n");
	else
		printf("�_��\n");
	system("pause");
	return 0;
}