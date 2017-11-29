#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void text1();
void text2();
void text3();
void text4();
void text5();
void text6();
void text7();
void text8();
void text9();
void text10();


void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.test1\n");
		printf("2.test2\n");
		printf("3.test3\n");
		printf("4.test4\n");
		printf("5.test5\n");
		printf("6.test6\n");
		printf("7.test7\n");
		printf("5.test8\n");
		printf("6.test9\n");
		printf("7.test10\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~10,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			test1();
			break;
		case 2:
			test2();
			break;
		case 3:
			test3();
			break;
		case 4:
			test4();
			break;
		case 5:
			test5();
			break;
		case 6:
			test6();
			break;
		case 7:
			test7();
			break;
		case 8:
			test8();
			break;
		case 9:
			test9();
			break;
		case 10:
			test10();
			break;
		case 0:
			flag = 0;
			break;

		default:
			break;

		}
		system("pause");
		system("cls");
	}
}