#include<stdio.h>
#include<stdlib.h>
void ex9_1a()
{
	struct student
	{
		char name[20];
		int score;
	} rec1;
	struct student rec2;
	printf("rec1 µ²ºc¦û %d byte\n", sizeof(rec1));
	printf("rec2 µ²ºc¦û %d byte\n", sizeof(rec2));
}