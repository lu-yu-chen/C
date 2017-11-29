#include<stdio.h>
#include<stdlib.h>
void ex10_1b()
{
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		while (getchar() != '\n')
		 continue;
		printf("#%d的輸入資料為:", i);
		scanf("%c", &ch);
		printf("#%d的輸出資料為:%c\n\n", i, ch);
	
	}
}