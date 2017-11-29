#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex5_1();
void ex7_3c();
void ex7_3d();
void ex7_3e();
void a();
void b();
void ex5_2();
void ex7_4a();
void ex7_4b();
void ex7_4c();
void ex7_4d();
void ex7_4e();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.\n");
		printf("2.\n");
		printf("3.\n");
		printf("4.\n");
		printf("5.\n");
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
			ex5_1();
			break;
		case 2:
			ex7_3c();
			break;
		case 3:
			ex7_3d();
			break;
		case 4:
			ex7_3e();
			break;
		case 5:
			a();
			break;
		case 6:
			b();
			break;
		case 7:
			ex5_2();
			break;
		case 8:
			ex7_4a();
			break;
		case 9:
			ex7_4b();
			break;
		case 10:
			ex7_4c();
			break;
		case 11:
			ex7_4d();
			break;
		case 12:
			ex7_4e();
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