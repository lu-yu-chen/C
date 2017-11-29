#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2b()
{
	char ch;
	printf("請輸入一個字元:");
	ch = _getche();
	if (isalpha(ch))
		printf("\n%c為英文字母\n", ch);
	else if (isdigit(ch))
		printf("\n%c為數字\n", ch);
	else
		printf("\n%c不是一英文字母或數字\n", ch);
}