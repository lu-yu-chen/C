#include<stdio.h>
#include<stdlib.h>

void hw3_3()
{
	int s;
	printf("輸入數值1~4");
	scanf("%d", &s);
	switch (s)
	{
	case 1:
		printf("春天\n");
		break;
	case 2:
		printf("夏天\n");
		break;
	case 3:
		printf("秋天\n");
		break;
	case 4:
		printf("冬天\n");
		break;
	default:
		printf("輸入錯誤");
	}
}