#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex9_1a();
void ex9_1b();
void ex9_1c();
void ex9_1d();
void ex9_1e();
void ex9_2a();
void ex9_2b();
void ex9_3a();
void ex9_3c();
void ex9_3b();
void ex9_4a();
void ex9_4b();
void ex9_4c();

void main(){
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.���c�ܼƪ��w�q�P�ϥ�(�@)\n");
		printf("2.���c�ܼƪ��w�q�P�ϥ�(�G)\n");
		printf("3.���c��������ȳ]�w\n");
		printf("4.�m��\n");
		printf("5.�m��\n");
		printf("6.���c�P����\n");
		printf("7.���c�����ܼƻP���\n");
		printf("8.���c�}�C(�@)\n");
		printf("8.���c�}�C(�G)\n");
		printf("10.�m��\n");
		printf("11.�쵲��C(�@)\n");
		printf("12.�쵲��C(�G)\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~14,��'0'�h��������!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex9_1a();
			break;
		case 2:
			ex9_1b();
			break;
		case 3:
			ex9_1c();
			break;
		case 4:
			ex9_1d();
			break;
		case 5:
			ex9_1e();
			break;
		case 6:
			ex9_2a();
			break;
		case 7:
			ex9_2b();
			break;
		case 8:
			ex9_3a();
			break;
		case 9:
			ex9_3b();
			break;
		case 10:
			ex9_3c();
			break;
		case 11:
			ex9_4a();
			break;
		case 12:
			ex9_4b();
			break;
		case 13:
			ex9_4c();
			break;
		case 14:
			ex9_4d();
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