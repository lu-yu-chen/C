#include<stdio.h>
#include<stdlib.h>
int number = 100;
void output6_4c(void);
int ex6_4c()
{
	printf("number is %d\n", number);
	output6_4c();
}
void output6_4c(void)
{
	int number =200;
	printf("number is %d\n", number);
}