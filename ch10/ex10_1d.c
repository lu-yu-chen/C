#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void ex10_1d()
{
	char option;
	do{
		printf("\n");
		printf("(1) ipod nano\n");
		printf("(2) iphone\n");
		printf("(3) imac\n");
		printf("�п�ܱz�n���ӫ~(1..3)��q����:");
		
		option =_getche();
		_getche();
		switch (option)
		{
		
		case '1':
			printf("\n�z��ܪ��ӫ~�Oipod nano\n");
			break;
		case '2':
			printf("\n�z��ܪ��ӫ~�Oiphone\n");
			break;
		case '3':
			printf("\n�z��ܪ��ӫ~�O imac\n");
			break;
		case 'q':
			exit(0);
		default:printf("\n�S���o�˪��ӫ~,�Э��s��J!!\n");
		}
	} while (option != 'q');
}