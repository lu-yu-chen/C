#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();
void ex7_2a();
void ex7_2b();
void ex7_2c();
void ex7_3a();
void ex7_3b();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.do while迴圈\n");
		printf("2.陣列的範例\n");
		printf("3.陣列的應用－最大與最小值\n");
		printf("4.陣列界線的檢查\n");
		printf("5.ex7_2a\n");
		printf("6.ex7_2b\n");
		printf("7.ex7_2c\n");
		printf("8.ex7_3a\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~10,按'0'則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2();
			break;
		case 3:
			ex4_3();
			break;
		case 4:
			ex4_4();
			break;
		case 5:
			ex7_2a();
			break;
		case 6:
			ex7_2b();
			break;
		case 7:
			ex7_2c();
			break;
		case 8:
			ex7_3a();
			break;
		case 9:
			ex7_3b();
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