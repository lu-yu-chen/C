#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2b()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = _getche();
	if (isalpha(ch))
		printf("\n%c���^��r��\n", ch);
	else if (isdigit(ch))
		printf("\n%c���Ʀr\n", ch);
	else
		printf("\n%c���O�@�^��r���μƦr\n", ch);
}