#include <stdio.h>
#include <stdlib.h>
void ex2_9()
{
	float a, b;
	char oper;
	printf("Please input the expression:(ex:3+2):");
	scanf("%d %c %d", &a, &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);
		break;
	case '/':
		printf("%d/%d=%.3f\n", a, b, a / b);
		break;
	default:
		printf("¿é¤J¿ù»~!!\n");
	}
}
