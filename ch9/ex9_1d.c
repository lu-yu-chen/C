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
	printf("�п�J����Ϊ����:");
	scanf("%d", &s.length);
	s.area = s.length*s.length;
	printf("����Ϊ����n��:%.2f\n", s.area);
}