#include<stdio.h>
#include<stdlib.h>
void ex4_3()
{
	int A[5] = {7,48,30,17,62};
	int i, min, max;
	min = max = A[0];

	for (i = 0; i < 5; i++)
	{
		if (A[i]>max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}
	printf("The maximun value of array element:%d\n",max);
	printf("The maximun value of array element:%d\n",min);
}