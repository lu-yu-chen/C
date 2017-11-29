#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void hw();


void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.雙重指標型態範例\n");
		printf("2.三重指標型態範例\n");
		printf("3.雙重指標除錯(一)\n");
		printf("4.雙重指標除錯(二)\n");
		printf("5.ex8_5\n");
		printf("6.ex8_6\n");
		printf("7.ex8_7\n");
		printf("8.hw\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~10,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;
		case 5:
			ex8_5();
			break;
		case 6:
			ex8_6();
			break;
		case 7:
			ex8_7();
			break;
		case 8:
			hw();
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