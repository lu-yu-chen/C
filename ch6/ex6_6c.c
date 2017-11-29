#include <stdio.h>
#include <stdlib.h>
int ex6_6c()
{
	int count1, count2;
	register long num = 0;
	printf("Testing storage class << register >>\n");
	printf("Number: \n");
	for (count1 = 1; count1 <= 500; count1++)
	for (count2 = 1; count2 <= 500; count2++)
		printf("\r%d", ++num);
	printf("\nTesting end!!\n");
	system("PAUSE");
	return 0;
}