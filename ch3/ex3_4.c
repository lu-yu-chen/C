#include<stdio.h>
#include<stdlib.h>
void ex3_4()
{
	float a, b;
	char oper;
	printf("輸入2位數運算:");
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
		printf("輸入錯誤!!\n");

	default:
		break;
	}
}