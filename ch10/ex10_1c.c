#include<stdio.h>
#include<stdlib.h>
void output(char);
void ex10_1c()
{
	char ch;
	printf("\n\n...�ϥ�getch()...\n");
	printf("�п�J�@�r��:");
	ch = _getch();
	output(ch);
	printf("\n\n...�ϥ�getche()...\n");
	printf("�п�J�@�r��:");
	ch = _getche();
	output(ch);
	printf("\n\n...�ϥ�getchar()...\n");
	printf("�п�J�@�r��:");
	while (getchar() != '\n')
	continue;
	ch = getchar();
	output(ch);
	printf("\n");
}
void output(char c)
{
	printf("\n�ϥ�getchar()��X�r��:");
	putchar(c);
}
