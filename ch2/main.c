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
		printf("1.����ǦC�P�榡�X������\n");
		printf("2.�l�ƹB��l\n");
		printf("3.���W�P����B��l\n");
		printf("4.�޿�B��l\n");
		printf("5.�_�� if �ԭz���m��\n");
		printf("6.if-else-if �ԭz������\n");
		printf("7.if �P else ���t����D\n");
		printf("8.����B��l���d��\n");
		printf("9.switch �ԭz���d��\n");
		printf("10.while�j�骺�d��\n");
		printf("11.�H�_��while�j���g�E�E���k��\n");
		printf("12.hw1\n");
		printf("13.hw2\n");
		printf("14.hw3\n");
		printf("15.hw4\n");
		printf("16.hw5\n");
		printf("17.hw6\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~9,��'0'�h��������!");
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