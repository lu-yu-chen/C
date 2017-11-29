#include<stdio.h>
#include<stdlib.h>
void hw(){
	int x, y;
	char *str[13] = { "ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz" };
	for (x = 0; x <= 26; x++)
	for (y = 0; y <= 1; y++)
	{
		printf("*(*(str+x)+y)=%c\n", *(*(str + x) + y));
	}
	printf("*((str+x)+y)=%p\n", *((str + x) + y));
}
