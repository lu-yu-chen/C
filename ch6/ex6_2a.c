#include<stdio.h>
#include<stdlib.h>
int square1();
int ex6_2a()
{
	int ans;
	printf("�p��Y�@��ƪ�����\n\n");
	ans = square1();
	printf("��������O%d\n", ans);
}

int square1()
{
	int num, total;
	printf("�п�J�@�Ӿ��:");
	scanf("%d", & num);
	total = num*num;
	return total;
}