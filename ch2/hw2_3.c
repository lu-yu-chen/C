#include <stdio.h>
#include <stdlib.h>
int hw2_3(void)
{
	int x;
	printf("��J���:\n");
	scanf("%d", &x);
	if ((x <= 22) && (x >= 20))
		printf("�Х[�@�����~�M!\n");
	if ((x <= 19) && (x >= 14))
		printf("�Ѯ�N, �Ь�W�~�M!\n");
	system("pause");
	return 0;
}