#include<stdio.h>
#include<stdlib.h>
void test(void);
int ex6_2b()
{
	printf("���{���b����retum���@��\n");
	printf("���ն}�l!!\n");
	test();
	printf("���յ���!!\n");
	system("PAUSE");
	return 0;
}
void test(void)
{
	int i, a, b;
	for (i = 1; i <= 10; i++)
	{
		printf("�п�Ja�Mb:");
		scanf("%d%d", &a, &b);
		if (b == 0)
			return;
		else
			printf("%d%d=%d\n",a,b,a/b);
		printf("for�j��]�F%d��\n\n",i);
	}
}