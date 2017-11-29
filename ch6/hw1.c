#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}
int hw1()
{
	int a, b, x, y;
	printf("輸入兩個整數:");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a<b)
	{
		x = b;
		y = a;
	}
	else
	{
		x = a;
		y = b;
	}
	printf("gcd=%d\n", gcd(x, y));
}