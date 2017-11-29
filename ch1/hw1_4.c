#include <stdio.h>
#include <stdlib.h>
void hw1_4()
{
	short x, y, z;
	short sum = 0;
	for (x = 1; x <= 10; x++)
	{
		for (y = 1; y <= x; y++)
		{
			z = x*y;
		}
		sum = sum + z;
	}
	printf("%d\n", sum);
}