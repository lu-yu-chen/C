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
	printf("使用者輸入數字(1~10):",b);
	scanf("%d", &b);
}
void init(void){
	a = (rand() % 10) + 1;
	printf("正確答案為:%d", a);
}
void compare(void){
	if (a != b)
		printf("猜錯了......");
	else
		printf("猜對了!!!!!!");
}