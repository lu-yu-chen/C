#include <stdio.h>
#include <stdlib.h>
int ex7_3(void)
{
	int *ptri;
	char *ptrc;
	printf("sizeof(ptri)=%d\n", sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	printf("sizeof(*ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));
	system("pause");
	return 0;
}