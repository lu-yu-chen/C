#include<stdio.h>
#include<stdlib.h>
void test(void);
int ex6_2b()
{
	printf("此程式在測試retum的作用\n");
	printf("測試開始!!\n");
	test();
	printf("測試結束!!\n");
	system("PAUSE");
	return 0;
}
void test(void)
{
	int i, a, b;
	for (i = 1; i <= 10; i++)
	{
		printf("請輸入a和b:");
		scanf("%d%d", &a, &b);
		if (b == 0)
			return;
		else
			printf("%d%d=%d\n",a,b,a/b);
		printf("for迴圈跑了%d次\n\n",i);
	}
}