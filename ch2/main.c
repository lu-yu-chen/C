#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex2_1();
void ex2_2();
void ex2_3();
void ex2_4();
void ex2_5();
void ex2_6();
void ex2_7();
void ex2_8();
void ex2_9();
void ex2_10();
void ex2_11();
void hw2_1();
void hw2_2();
void hw2_3();
void hw2_4();
void hw2_5();
void hw2_6();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.跳脫序列與格式碼的應用\n");
		printf("2.餘數運算子\n");
		printf("3.遞增與遞減運算子\n");
		printf("4.邏輯運算子\n");
		printf("5.巢狀 if 敘述的練習\n");
		printf("6.if-else-if 敘述的應用\n");
		printf("7.if 與 else 的配對問題\n");
		printf("8.條件運算子的範例\n");
		printf("9.switch 敘述的範例\n");
		printf("10.while迴圈的範例\n");
		printf("11.以巢狀while迴圈改寫九九乘法表\n");
		printf("12.hw1\n");
		printf("13.hw2\n");
		printf("14.hw3\n");
		printf("15.hw4\n");
		printf("16.hw5\n");
		printf("17.hw6\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~9,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex2_1();
			break;
		case 2:
			ex2_2();
			break;
		case 3:
			ex2_3();
			break;
		case 4:
			ex2_4();
			break;
		case 5:
			ex2_5();
			break;
		case 6:
			ex2_6();
			break;
		case 7:
			ex2_7();
			break;
		case 8:
			ex2_8();
			break;
		case 9:
			ex2_9();
			break;
		case 10:
			ex2_10();
			break;
		case 11:
			ex2_11();
			break;
		case 12:
			hw2_1();
			break;
		case 13:
			hw2_2();
			break;
		case 14:
			hw2_3();
			break;
		case 15:
			hw2_4();
			break;
		case 16:
			hw2_5();
			break;
		case 17:
			//hw2_6();
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