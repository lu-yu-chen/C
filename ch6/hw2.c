#include <stdio.h>
#include <stdlib.h>
void init(void);
void getans(void);
void compare(void);
int a, b;
int hw2()
{
	getans();
	init();
	compare();
}
void getans(void){
	printf("�ϥΪ̿�J�Ʀr(1~10):",b);
	scanf("%d", &b);
}
void init(void){
	a = (rand() % 10) + 1;
	printf("���T���׬�:%d", a);
}
void compare(void){
	if (a != b)
		printf("�q���F......");
	else
		printf("�q��F!!!!!!");
}