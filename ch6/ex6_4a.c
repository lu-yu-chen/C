#include<stdio.h>
#include<stdlib.h>
int number;
void output6_4(void);
int ex6_4a()
{
	printf("please enter a number:");
	scanf("%d", &number);
	output6_4();
}
void output6_4(void)
{
	printf("Number is %d\n", number);
}