#include<stdio.h>
#include<stdlib.h>
void ex10_2e()
{
	char ch;
	printf("輸入一個英文字母:");
	ch = _getche();
	if (ch >= 65 && ch <= 90)
			ch += 32;
			printf("\n此字母的小寫是%c", ch);
		if  (ch >= 97 && ch <= 132)
			ch -= 32;
			printf("\n此字母的大寫是%c\n", ch);
		if  ((ch <= 65 && ch > 90) || (ch<97 && ch >132))
			printf("\n%c不是英文字母\n", ch);
}