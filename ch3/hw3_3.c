#include<stdio.h>
#include<stdlib.h>

void hw3_3()
{
	int s;
	printf("��J�ƭ�1~4");
	scanf("%d", &s);
	switch (s)
	{
	case 1:
		printf("�K��\n");
		break;
	case 2:
		printf("�L��\n");
		break;
	case 3:
		printf("���\n");
		break;
	case 4:
		printf("�V��\n");
		break;
	default:
		printf("��J���~");
	}
}