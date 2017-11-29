#include <stdio.h>
#include <stdlib.h>
void hw1_3()
{
	short i = 1;
	short sum = 0;
	for (i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
	}
	printf("%d", sum);
}