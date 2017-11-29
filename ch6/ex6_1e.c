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
	printf("輸入一個值:\n");
	scanf("%d", &a);
	if (a >= 0)
		c = a;
	else
		c = a*(-1);
	printf("其絕對值為:%d\n", c);
}
