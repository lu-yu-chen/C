#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2c()
{
	char ch;
	printf("請輸入一個字元:");
	ch = _getche();
	if (isupper(ch))
		printf("\n%c是大寫英文字母\n", ch);
	else if (islower(ch))
		printf("\n%c是小寫英文字母\n", ch);
	else
		printf("\n%c不是英文字母\n", ch);
}