#include<stdio.h>
#include<stdlib.h>
void ex10_2e()
{
	char ch;
	printf("��J�@�ӭ^��r��:");
	ch = _getche();
	if (ch >= 65 && ch <= 90)
			ch += 32;
			printf("\n���r�����p�g�O%c", ch);
		if  (ch >= 97 && ch <= 132)
			ch -= 32;
			printf("\n���r�����j�g�O%c\n", ch);
		if  ((ch <= 65 && ch > 90) || (ch<97 && ch >132))
			printf("\n%c���O�^��r��\n", ch);
}