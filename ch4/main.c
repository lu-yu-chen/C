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
		printf("1.do while�j��\n");
		printf("2.�}�C���d��\n");
		printf("3.�}�C�����Ρг̤j�P�̤p��\n");
		printf("4.�}�C�ɽu���ˬd\n");
		printf("5.ex7_2a\n");
		printf("6.ex7_2b\n");
		printf("7.ex7_2c\n");
		printf("8.ex7_3a\n");
		printf("..................................");
		printf("�п�J�n���檺�d��  1~10,��'0'�h��������!");
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