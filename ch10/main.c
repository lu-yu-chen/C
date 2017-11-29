#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex10_1a();
void ex10_1b();
void ex10_1c();
void ex10_1d();
void ex10_2a();
void ex10_2b();
void ex10_2c();
void ex10_2d(); 
void ex10_2e();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.測試 scanf() 輸入字元的缺點\n");
		printf("2.處理 scanf() 輸入字元的缺點\n");
		printf("3.測試字元的輸出入函數 \n");
		printf("4.選擇輸出使用 _getche() \n");
		printf("5.isalnum() \n");
		printf("6.isalpha()及isdigit() \n");
		printf("7.isupper()及islower() \n");
		printf("8.toupper()及tolower() \n");
		printf("9.練習toupper()及tolower()\n");
		printf("..................................");
		printf("請輸入要執行的範例  1~9,按'0'則結束執行!");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ex10_1a();
			break;
		case 2:
			ex10_1b();
			break;
		case 3:
			ex10_1c();
			break;
		case 4:
			ex10_1d();
			break;
		case 5:
			ex10_2a();
			break;
		case 6:
			ex10_2b();
			break;
		case 7:
			ex10_2c();
			break;
		case 8:
			ex10_2d();
			break;
		case 9:
			ex10_2e();
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