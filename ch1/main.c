#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void ex1_5();
void hw1_1();
void hw1_2();
void hw1_3();
void hw1_4();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.第一個C程式語言\n");
		printf("2.程式區塊及本體\n");
		printf("3.溢位\n");
		printf("4.控制輸出欄位的寬度\n");
		printf("5.輸入函數scanf()\n");
		printf("6.hw1\n");
		printf("7.hw2\n");
		printf("8.hw3\n");
		printf("9.hw4\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~9,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			ex1_5();
			break;
		case 6:
			hw1_1();
			break;
		case 7:
			hw1_2();
			break;
		case 8:
			hw1_3();
			break;
		case 9:
			hw1_4();
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