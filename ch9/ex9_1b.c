#include<stdio.h>
#include<stdlib.h>
void ex9_1b()
{
	struct triange
	{
		int length, height;
		double area;
	};
	struct triange tri;
	printf("�п�J�T���Ϊ���:");
	scanf("%d", &tri.length);
	printf("�п�J�T���Ϊ���:");
	scanf("%d", &tri.height);
	tri.area = tri.length*tri.height / 2.0;
	printf("�T���Ϊ����n��:%.2f\n", tri.area);
}