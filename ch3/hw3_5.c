#include<stdio.h>
#include<stdlib.h>

void hw3_5()
{
	int a = 0, s = 0;
	do
	{
		a++;
		s = s + a;
	} while (s<1000);
	printf("1+2+3+...+%d=%d\n", a, s);
}