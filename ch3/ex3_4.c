#include<stdio.h>
#include<stdlib.h>
void ex3_4()
{
	float a, b;
	char oper;
	printf("��J2��ƹB��:");
	scanf("%f%c %f", &a, &oper, &b);

	switch (oper)
	{
	case'+':
		printf("%f+%f=%f\n", a, b, a + b);
		break;
	case'-':
		printf("%f-%f=%f\n", a, b, a - b);
		break;
	case'*':
		printf("%f*%f=%f\n", a, b, a * b);
		break;
	case'/':
		printf("%f/%f=%f\n", a, b, a / b);
		break;
		printf("��J���~!!\n");

	default:
		break;
	}
}