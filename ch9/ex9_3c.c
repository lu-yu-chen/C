#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct  order
{
	int quantity;
	char product[20];
	double price;
};
struct   order s[5];
int index9_3c = 0;
void create9_3c();
void  ex9_3c()
{
			create9_3c();
}
void create9_3c()
{
	for (int a = 0; a <5; a++){
		printf("�п�J���~�W��:");
		scanf("%s", s[index9_3c].product);
		while (getchar() != '\n')
			continue;
		printf("�п�J���~����:");
		scanf("%lf", &s[index9_3c].price);
		printf("�п�J�q�ʼƶq:");
		scanf("%d", &s[index9_3c].quantity);
		index9_3c++;
	}
	printf("\n<<�q��C��>>\n");
	int c;
	for (c = 0; c <5; c++){
		
		printf("���~�W��:%-10s\n", s[c].product);
		printf("����:%-5.lf\n", s[c].price);
		printf("�ƶq:%-10d\n", s[c].quantity);
	}
}