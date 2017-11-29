#include<stdio.h>
#include<stdlib.h>

void hw3_4()
{
	int a = 1, t = 0;
	while (a++<10)
	{
		t = a*a;
		printf("%d.%d\n", a, a*a);
	}
	printf("t=%d", t);
}