#include<stdio.h>
#include<stdlib.h>
double squAdd1(double, double, double);
void printstar3(int);
int ex6_1f()
{
	double num1, num2,num3, sum;
	int num;
	printf("���{���b�p��T�ӯB�I�ƪ��ߤ�M\n\n");
	printf("�п�J�T�ӯB�I��:");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	sum = squAdd1( num1,num2,num3);
	printf("�A�n�h�֬P�P:");
	scanf("%d", &num);
	printstar3(num);
	printf("%lf���ߤ�[%lf���ߤ�[%lf���ߤ謰%lf\n", num1, num2,num3, sum);
	printstar3(num);
}
double squAdd1(double a, double  b, double  c)
{
	double ans;
	ans = a*a*a + b*b*b+c*c*c;
	return ans;
}
void printstar3(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}
