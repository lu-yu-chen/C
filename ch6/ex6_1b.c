#include<stdio.h>
#include<stdlib.h>
void output2(void);
void dash(void);
int ex6_1b()
{
	printf("�I�soutput���!!\n");
	dash();
	output2();
	dash();
	printf("�I�s����,over!!\n");
}
void output2(void)
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wApple watch\n");
}
void dash(void)
{
	int i;
	for (i = 0; i < 50;i++)
	printf("-");
	printf("\n");
}