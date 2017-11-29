#include<stdio.h>
#include<stdlib.h>
void output2(void);
void dash(void);
int ex6_1b()
{
	printf("呼叫output函數!!\n");
	dash();
	output2();
	dash();
	printf("呼叫結束,over!!\n");
}
void output2(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}
void dash(void)
{
	int i;
	for (i = 0; i < 50;i++)
	printf("-");
	printf("\n");
}