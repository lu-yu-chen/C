#include <stdio.h>
#include <stdlib.h>
void increase();
int ex6_6b()
{
	int count;
	printf("Testing storage class << static >>\n");
	for (count = 1; count <= 5; count++)
	{
		printf("#%d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	system("PAUSE");
	return 0;
}
void increase(void)
{
	static int si = 100;
	printf("si = %d\n", ++si);
}