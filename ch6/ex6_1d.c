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
	printf("輸入長方形的長:\n");
	scanf("%d" , & a);
	printf("輸入長方形的寬:\n");
	scanf("%d" , & b);
	c = a * b ;
	printf("長方形的面積為:%d\n" ,c);
}
