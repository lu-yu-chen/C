#include<stdio.h>
#include<stdlib.h>
void swap(int, int);
int ex7_7(){
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}