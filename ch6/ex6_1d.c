#include<stdio.h>
#include<stdlib.h>
void a();
int ex6_1d()
{
	a();
}
void a(void)
{
	int a, b, c ;
	printf("��J����Ϊ���:\n");
	scanf("%d" , & a);
	printf("��J����Ϊ��e:\n");
	scanf("%d" , & b);
	c = a * b ;
	printf("����Ϊ����n��:%d\n" ,c);
}
