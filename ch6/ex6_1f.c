#include<stdio.h>
#include<stdlib.h>
double squAdd1(double, double, double);
void printstar3(int);
int ex6_1f()
{
	double num1, num2,num3, sum;
	int num;
	printf("此程式在計算三個浮點數的立方和\n\n");
	printf("請輸入三個浮點數:");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	sum = squAdd1( num1,num2,num3);
	printf("你要多少星星:");
	scanf("%d", &num);
	printstar3(num);
	printf("%lf的立方加%lf的立方加%lf的立方為%lf\n", num1, num2,num3, sum);
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
