#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2d()
{
	char ch;
	printf("請輸入一個英文字母:");
	ch = _getche();
	printf("\n此字母的大寫是%c", toupper(ch));
	printf("\n此字母的小寫是%c\n", tolower(ch));
}