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
		printf("1.�Ĥ@��C�{���y��\n");
		printf("2.�{���϶��Υ���\n");
		printf("3.����\n");
		printf("4.�����X��쪺�e��\n");
		printf("5.��J���scanf()\n");
		printf("6.hw1\n");
		printf("7.hw2\n");
		printf("8.hw3\n");
		printf("9.hw4\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~9,��'0'�h��������!");
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