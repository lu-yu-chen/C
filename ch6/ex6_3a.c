#include<stdio.h>
#include<stdlib.h>
int square(int);
int ex6_3a()
{
	int num,ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���:");
	scanf("%d", &num);
	ans = square(num);
	printf("%d������O%d\n",num,ans);
}
int square(n)
{
	int total;
	total = n*n;
	return total;
}