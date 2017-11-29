#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex6_1a();
void ex6_1b();
void ex6_1c();
void ex6_1d();
void ex6_1e();
void ex6_2a();
void ex6_2b();
void ex6_3a();
void ex6_3b();
void ex6_3c();
void ex6_1f();
void ex6_4a();
void ex6_4b();
void ex6_4c();
void ex6_5a();
void ex6_5b();
void ex6_6a();
void ex6_6b();
void ex6_6c();
void ex6_6d();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.ex6_1a\n");
		printf("2.ex6_1b\n");
		printf("3.ex6_1c\n");
		printf("4.ex6_1d\n");
		printf("5.ex6_1e\n");
		printf("6.ex6_2a\n");
		printf("7.ex6_2b\n");
		printf("8.ex6_3a\n");
		printf("9.ex6_3b\n");
		printf("10.ex6_3c\n");
		printf("11.ex6_1f\n");
		printf("12.ex6_4a\n");
		printf("13.ex6_4b\n");
		printf("14.ex6_4c\n");
		printf("15.ex6_1g\n");
		printf("16.ex6_5a\n");
		printf("17.ex6_5b\n");
		printf("18.ex6_6a\n");
		printf("19.ex6_6b\n");
		printf("20.ex6_6c\n");
		printf("21.ex6_6d\n");
		printf("22.hw1\n");
		printf("23.hw2\n");
		printf("24.hw3\n");
		printf("25.hw4\n");
		printf("26.hw5\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~26,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex6_1a();
			break;
		case 2:
			ex6_1b();
			break;
		case 3:
			ex6_1c();
			break;
		case 4:
			ex6_1d();
			break;
		case 5:
			ex6_1e();
			break;
		case 6:
			ex6_2a();
			break;
		case 7:
			ex6_2b();
			break;
		case 8:
			ex6_3a();
			break;
		case 9:
			ex6_3b();
			break;
		case 10:
			ex6_3c();
			break;
		case 11:
			ex6_1f();
			break;
		case 12:
			ex6_4a();
			break;
		case 13:
			ex6_4b();
			break;
		case 14:
			ex6_4c();
			break;
		case 15:
			ex6_1g();
			break;
		case 16:
			ex6_5a();
			break;
		case 17:
			ex6_5b();
			break;
		case 18:
			ex6_6a();
			break;
		case 19:
			ex6_6b();
			break;
		case 20:
			ex6_6c();
			break;
		case 21:
			ex6_6d();
			break;
		case 22:
			hw1();
			break;
		case 23:
			hw2();
			break;
		case 24:
			hw3();
			break;
		case 25:
			hw4();
			break;
		case 26:
			hw5();
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