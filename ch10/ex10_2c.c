#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2c()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = _getche();
	if (isupper(ch))
		printf("\n%c�O�j�g�^��r��\n", ch);
	else if (islower(ch))
		printf("\n%c�O�p�g�^��r��\n", ch);
	else
		printf("\n%c���O�^��r��\n", ch);
}