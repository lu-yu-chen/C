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
		printf("1.���� scanf() ��J�r�������I\n");
		printf("2.�B�z scanf() ��J�r�������I\n");
		printf("3.���զr������X�J��� \n");
		printf("4.��ܿ�X�ϥ� _getche() \n");
		printf("5.isalnum() \n");
		printf("6.isalpha()��isdigit() \n");
		printf("7.isupper()��islower() \n");
		printf("8.toupper()��tolower() \n");
		printf("9.�m��toupper()��tolower()\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~9,��'0'�h��������!");
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