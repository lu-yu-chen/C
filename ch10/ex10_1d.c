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
		printf("請選擇您要的商品(1..3)或q結束:");
		
		option =_getche();
		_getche();
		switch (option)
		{
		
		case '1':
			printf("\n您選擇的商品是ipod nano\n");
			break;
		case '2':
			printf("\n您選擇的商品是iphone\n");
			break;
		case '3':
			printf("\n您選擇的商品是 imac\n");
			break;
		case 'q':
			exit(0);
		default:printf("\n沒有這樣的商品,請重新輸入!!\n");
		}
	} while (option != 'q');
}