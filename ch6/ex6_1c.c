#include<stdio.h>
#include<stdlib.h>
void calculate(void);

int ex6_1c()
{
	calculate();
}
void calculate(void)
{
	int a;
	printf("��J��Ƹ��\n");
	scanf("%d\n", & a);
	if (a >= 60)
		printf("pass\n");
	else
		printf("down\n");
}
