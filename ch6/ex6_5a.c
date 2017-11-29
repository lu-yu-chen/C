#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int ex6_5a()
{
	int num;
	printf("please input a number:");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial(num));
}
int factorial(int n)
{
	if (n > 1)
		return(n * factorial(n - 1));
	else
		return 1;
}