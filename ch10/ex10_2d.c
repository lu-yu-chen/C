#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2d()
{
	char ch;
	printf("�п�J�@�ӭ^��r��:");
	ch = _getche();
	printf("\n���r�����j�g�O%c", toupper(ch));
	printf("\n���r�����p�g�O%c\n", tolower(ch));
}