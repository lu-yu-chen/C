#include<stdio.h>
#include<stdlib.h>
void b();
int ex6_1e()
{
	b();
}
void b(void)
{
	int a, c;
	printf("��J�@�ӭ�:\n");
	scanf("%d", &a);
	if (a >= 0)
		c = a;
	else
		c = a*(-1);
	printf("�䵴��Ȭ�:%d\n", c);
}
