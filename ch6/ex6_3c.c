#include<stdio.h>
#include<stdlib.h>
int squAdd(int, int);
void printstar1();
int ex6_3c()
{
	int num1, num2, sum;
	printf("���{���b�p����ƪ�����M\n\n");
	printf("�п�J��Ӿ��:");
	scanf("%d%d", &num1, &num2);
	sum = squAdd(num1, num2);
	printstar1();
	printf("%d������[%d�����謰%d\n",num1,num2,sum);
	printstar1();
}
int squAdd(int a, int b)
{
	int ans;
	ans = a*a + b*b;
	return ans;
}
void printstar1()
{
	int i;
	for (i = 1; i <= 30; i++)
	printf("*");
	printf("\n");
}