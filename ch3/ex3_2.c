#include<stdio.h>
#include<stdlib.h>
int ex3_2()
{
	int num1, num2, larger;
	printf("Please input two integers::\n");
	printf("Please input first integers:\n");
	printf("Please input second integers:\n");
	scanf("%d %d", &num1, &num2);

	num1 > num2 ? (larger = num1) : (larger = num2);
	printf("%d greater value \n", larger);

}