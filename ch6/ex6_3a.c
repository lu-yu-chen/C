#include<stdio.h>
#include<stdlib.h>
int square(int);
int ex6_3a()
{
	int num,ans;
	printf("計算某一整數的平方\n\n");
	printf("請輸入一整數:");
	scanf("%d", &num);
	ans = square(num);
	printf("%d的平方是%d\n",num,ans);
}
int square(n)
{
	int total;
	total = n*n;
	return total;
}