#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();
void ex3_7();
void ex3_8();
void hw3_1();
void hw3_2();
void hw3_3();
void hw3_4();
void hw3_5();
void hw3_6();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.���W�P����B��l\n");
		printf("2.����B��\n");
		printf("3.�_�� if �ԭz\n");
		printf("4.switch �ԭz\n");
		printf("5.while�j��\n");
		printf("6.�H�_��while�j���g�E�E���k��\n");
		printf("7.�H�_���j��L�X�X��ϧ�\n");
		printf("8.�H�_���j��ϦL�Ʀr\n");
		printf("9.hw1\n");
		printf("10.hw2\n");
		printf("11.hw3\n");
		printf("12.hw4\n");
		printf("13.hw5\n");
		printf("14.hw6\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~10,��'0'�h��������!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex3_1();
			break;
		case 2:
			ex3_2();
			break;
		case 3:
			ex3_3();
			break;
		case 4:
			ex3_4();
			break;
		case 5:
			ex3_5();
			break;
		case 6:
			ex3_6();
			break;
		case 7:
			ex3_7();
			break;
		case 8:
			ex3_8();
			break;
		case 9:
			hw3_1();
			break;
		case 10:
			//hw3_2();
			break;
		case 11:
			hw3_3();
			break;
		case 12:
			hw3_4();
			break;
		case 13:
			hw3_5();
			break;
		case 14:
			hw3_6();
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