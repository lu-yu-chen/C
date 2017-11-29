#include<stdio.h>
#include<stdlib.h>
void output(char);
void ex10_1c()
{
	char ch;
	printf("\n\n...使用getch()...\n");
	printf("請輸入一字元:");
	ch = _getch();
	output(ch);
	printf("\n\n...使用getche()...\n");
	printf("請輸入一字元:");
	ch = _getche();
	output(ch);
	printf("\n\n...使用getchar()...\n");
	printf("請輸入一字元:");
	while (getchar() != '\n')
	continue;
	ch = getchar();
	output(ch);
	printf("\n");
}
void output(char c)
{
	printf("\n使用getchar()輸出字元:");
	putchar(c);
}
