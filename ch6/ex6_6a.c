#include <stdio.h>
#include <stdlib.h>
void increase();
int ex6_6a()
{
	int count;
	printf("Testing storage class << auto >>\n");
	for (count = 1; count <= 5; count++)
	{
		printf("# %d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	system("PAUSE");
	return 0;
}
void increase6_6a()
{
	auto int ai = 100; 
	printf("ai = %d\n", ++ai);
}