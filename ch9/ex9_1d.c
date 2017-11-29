#include<stdio.h>
#include<stdlib.h>
void ex9_1d()
{
	struct square
	{
		int length;
		double area;
	};
	struct square s;
	printf("請輸入正方形的邊長:");
	scanf("%d", &s.length);
	s.area = s.length*s.length;
	printf("正方形的面積為:%.2f\n", s.area);
}